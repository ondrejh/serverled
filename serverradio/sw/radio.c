// test of non cannonical mode of uart in linux
// code source: http://tldp.org/HOWTO/Serial-Programming-HOWTO/x115.html
// editor: Ondrej Hejda, Metel s.r.o.
// date:   25.1.2010

//#include <sys/types.h>
//#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <time.h>
#include <stdbool.h>

#define BUFLENGTH 256

#define BAUDRATE B57600
#define MODEMDEVICE "/dev/ttyUSB0"
#define TXRX_TIMEOUT 0.2f/*s*/

#define END_CHAR '/n'

/** termios structures */
struct termios oldtio,newtio;

/** open port function
 * substitutes port openning - to make porting easier
 * returns 0 if success -1 if error
 * variable "f" sets with targe file descriptor */
int open_port(unsigned int *f, char *device)
{
	/* open the device to be non-blocking (read will return immediatly) */
	*f = open(device, O_RDWR | O_NOCTTY | O_NONBLOCK);
	if (*f <0) {perror(device); return(-1); }

	tcgetattr(*f,&oldtio); /* save current port settings */

	// clear termios structure
	bzero(&newtio, sizeof(newtio));

	// set termios values
	/*	BAUDRATE: Set bps rate. You could also use cfsetispeed and cfsetospeed.
		CS8     : 8n1 (8bit,no parity,1 stopbit)
		CSTOPB	: 2 stop bits (1 otherwise)
		CREAD   : enable receiving characters
		PARENB	: enable parity bit
		PARODD	: use odd parity instead of even
		HUPCL	: hangup (drop dtr) on last close
		CLOCAL  : local connection, no modem contol
		LOBLK	: block job control output
		CRTSCTS : output hardware flow control (only used if the cable has
				  all necessary lines. See sect. 7 of Serial-HOWTO) */
	//newtio.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD | HUPCL;
	newtio.c_cflag = BAUDRATE | CS8 | CLOCAL | CREAD;// | HUPCL;
	//newtio.c_cflag = BAUDRATE | CS8 | CLOCAL | CREAD;

	/* 	ISIG	: enable SIGINTR, SIGSUSP, SIGDSUSP, and SIGQUIT signals
		ICANON	: enable canonical input (else raw)
		XCASE	: map uppercase \lowercase (obsolete)
		ECHO	: enable echoing of input characters
		ECHOE	: echo erase character as DS-SP-BS
		ECHOK	: echo NL after kill character
		ECHONL	: echo NL
		NOFLSH	: disable flushing of input buffers after interrupt or
				  quit characters
		IEXTEN	: enable extended functions
		ECHOCTL	: echo control character as ^char and delete as ~?
		ECHOPRT : echo erased character as character erased
		ECHOKE	: BS-SP-BS entire line on line kill
		FLUSHO	: output being flushed
		PENDIN	: retype pending input at next read or input char
		TOSTOP	: send SIGTTOU for background output */
	newtio.c_lflag = ICANON;

	/*	INPCK	: enable parity check
		IGNPAR  : ignore parity errors
		PARMRK	: mark parity errors
		ISTRIP	: strip parity bits
		ICRNL   : map CR to NL (otherwise a CR input on the other computer
				  will not terminate input)
				  otherwise make device raw (no other input processing) */
	newtio.c_iflag = IGNPAR | ICRNL;

	/* Raw output */
	newtio.c_oflag = 0;// &= ~OPOST;

	newtio.c_cc[VTIME]    = 1;   /* inter-character timer unused */
	newtio.c_cc[VMIN]     = 0;//= 5; /* blocking read until 5 chars received */

	tcflush(*f, TCIFLUSH);
	tcsetattr(*f,TCSANOW,&newtio);
	return(0);
}

/** close port function
 * substitutes port closing function - to make porting easier
 * return 0 if success or -1 if error */
int close_port(unsigned int f)
{
	tcsetattr(f,TCSANOW,&oldtio);
	return (close(f));
}

/** txrx function
 * send and receive message frame on specified file descriptor f
 * returns received message length or -1 if error or timeout */
int txrx(unsigned int f, char *txbuf, char *rxbuf)
{
    int i;
	time_t start_t, now_t;
    i=write(f,txbuf,strlen(txbuf));
    //printf("%s",txbuf);
    time(&start_t);
    while (1)
    {
        i = read(f,rxbuf,BUFLENGTH);
        if (i>0)
        {
            rxbuf[i]='\0';
            return i;
        }
        time(&now_t);
        if (difftime(now_t,start_t)>TXRX_TIMEOUT) return -1;
        //printf("%f\n",difftime(now_t,start_t));
    }
    return -1;
}

/** main programm body */
int main(int argc, char *argv[])
{
	/*int busadr = 0;
	int dataptr = 0x00;
	int dataptr_set = 0;
	int value = 0;
	int value_set = 0;*/

	unsigned int fd; // serial port file descriptor
	char *portname = MODEMDEVICE;

	bool verbose_mode = false;

	int i;

    // argument parsing
	if (argc>1)
	{
		for (i=1;i<argc;i++)
		{
			if (strcmp(argv[i],"-p")==0)
			{
				if (i<(argc-1))
				{
				    strcpy(portname,argv[++i]);
				    printf("Port name: %s\n",portname);
				}
			}
		}
		for (i=1;i<argc;i++)
		{
		    if (strcmp(argv[i],"-v")==0)
                verbose_mode = true;
		}
	}

    // open serial port
    if (open_port(&fd,portname)!=0)
    {
        printf("Can't open serial port: %s\n",portname);
        return -1;
    }

    // get device name
    char answer[BUFLENGTH];
    for (i=0;i<3;i++) if (txrx(fd,"DEVICE\n",answer)>0) break;
    if ((i==3)&&(verbose_mode))
        printf("No communication response !!!\n");
    else if ((i>0)&&(verbose_mode))
        printf("Warning: Kinda communication problem: %d trials to get answer",i+1);
    printf("Found device: %s\n",answer);

    // get firmware version
    for (i=0;i<3;i++) if (txrx(fd,"VERSION\n",answer)>0) break;
    if ((i==3)&&(verbose_mode))
        printf("No communication response !!!\n");
    else if ((i>0)&&(verbose_mode))
        printf("Warning: Kinda communication problem: %d trials to get answer",i+1);
    printf("Version: %s\n",answer);

    // close serial port
    close_port(fd);
	return(0);
}
