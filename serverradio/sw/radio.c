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
#include <math.h>

#define BUFLENGTH 256

#define BAUDRATE B57600
#define MODEMDEVICE "/dev/ttyUSB0"
#define TXRX_TIMEOUT 0.2f/*s*/

/** termios structures */
struct termios oldtio,newtio;

typedef enum
{
    OFF = 0,
    ON = 1,
    UNKNOWN = -1
} PwrStat;

typedef enum
{
    STATUS = 0,
    PWR_ON = 1,
    PWR_OFF = 2,
    SWAP_PWR = 3,
    TUNE = 4
} ActionList;

/** open port function
 * substitutes port openning - to make porting easier
 * returns 0 if success -1 if error
 * variable "f" sets with targe file descriptor */
int open_port(unsigned int *f, char *device)
{
	/* open the device to be non-blocking (read will return immediatly) */
	*f = open(device, O_RDWR | O_NOCTTY);// | O_NONBLOCK);
	if (*f <0) {perror(device); return(-1); }

	tcgetattr(*f,&oldtio); /* save current port settings */

	// clear termios structure
	bzero(&newtio, sizeof(newtio));

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
	newtio.c_lflag = 0;

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
	//newtio.c_oflag &= ~OPOST;

	newtio.c_cc[VTIME]    = 2;   /* inter-character timer unused */
	newtio.c_cc[VMIN]     = 0;//= 5; /* blocking read until 5 chars received */

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
	//newtio.c_cflag = BAUDRATE | CS8 | CLOCAL | CREAD;// | HUPCL;
	newtio.c_cflag = BAUDRATE | CS8 | CLOCAL | CREAD;

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

/// printf message in hex form
void printhex(char *str)
{
    int i;
    for (i=0;i<strlen(str);i++)
    {
        printf("%02X",str[i]);
        if ((i>0) && ((i-1)&0x03==0) && (i!=(strlen(str)-1))) print(" ");
    }
    printf("\n");
}

/** txrx function
 * send and receive message frame on specified file descriptor f
 * returns received message length or -1 if error or timeout */
int txrx(unsigned int f, char *txbuf, char *rxbuf)
{
    int i,j;
    for (j=0;j<3;j++)
    {
        i=write(f,txbuf,strlen(txbuf));
        i=read(f,rxbuf,BUFLENGTH);
        rxbuf[i]='\0';
        i=strip(rxbuf);
        if (i>0) break;
        usleep(200000);
    }
    return i;
}

/// try to flush input & output buffer in the device
void flush(unsigned int f)
{
    write(f,"\n\n\n",3);
    usleep(100000);
    char rxbuf[BUFLENGTH];
    read(f,rxbuf,BUFLENGTH);
}

/// strip input message (cut all everything after '/n')
int strip(char * str)
{
    int i;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]=='\n') str[i]='\0';
        if (str[i]=='\0')
        {
            return i;
            break;
        }
    }
}

/** main programm body */
int main(int argc, char *argv[])
{
	unsigned int fd; // serial port file descriptor
	char *portname = MODEMDEVICE;

	bool verbose_mode = false;
	PwrStat pwr = UNKNOWN;
	ActionList action = STATUS;
	bool success = false;

	int tuneval = 0;

    char device[BUFLENGTH];
    char version[BUFLENGTH];
    char answer[BUFLENGTH];

	int i;

    // argument parsing
	if (argc>1)
	{
	    for (i=1;i<argc;i++)
	    {
	        if ((strcmp(argv[i],"-h")==0) || (strcmp(argv[i],"--help")==0))
	        {
	            FILE *helpfile;
	            helpfile = fopen("radio.hlp","r");
	            if (helpfile!=NULL)
	            {
	                char c;
	                while((c=fgetc(helpfile))!=EOF) fputc(c,stdout);
	                return(0);
	            }
	            else
	            {
	                printf("Arduino FM transmitter tune programm\nCouldn't find help file !\n");
	                return 0;
	            }
	        }
	    }
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
		for (i=1;i<argc;i++)
		{
		    if (strcmp(argv[i],"ON")==0)
                action = PWR_ON;
		}
		for (i=1;i<argc;i++)
		{
		    if (strcmp(argv[i],"OFF")==0)
                action = PWR_OFF;
		}
		for (i=1;i<argc;i++)
		{
		    if (strncmp(argv[i],"TUNE",4)==0)
		    {
		        int tvn,tvd;
		        if (sscanf(argv[i],"TUNE%d.%d",&tvn,&tvd)==2)
		        {
		            tuneval=tvn*10+tvd;
		            //printf("Tuneval = %d\n",tuneval);
		            if ((tuneval<875)||(tuneval>1080))
		            {
		                printf("Tune value out of range (87.5 .. 108.0)\n");
		                return -1;
		            }
		            //printf("Tune into %d.%dMHz\n",tvn,tvd);
                    action = TUNE;
		        }
		    }
		}
	}

    // open serial port
    if (open_port(&fd,portname)!=0)
    {
        printf("Can't open serial port: %s\n",portname);
        return -1;
    }

    flush(fd);

    // get device name
    txrx(fd,"DEVICE\n",answer);
    //printhex(answer);
    printf("Found device: %s\n",answer);

    // get firmware version
    txrx(fd,"VERSION\n",answer);
    printf("Version: %s\n",answer);

    // get power status
    txrx(fd,"PWR\n",answer);
    if (strcmp(answer,"ON")==0) pwr=ON;
    else if (strcmp(answer,"OFF")==0) pwr=OFF;

    switch (action)
    {
        case PWR_ON:
            if (pwr==ON) // if power on .. just say it's on
            {
                printf("Power: %s\n",answer);
            }
            else
            {
                // set power ON
                write(fd,"PWR ON\n",strlen("PWR ON\n"));
                // get new power status (and show)
                txrx(fd,"PWR\n",answer);
                printf("Power: %s\n",answer);
                if (strcmp(answer,"ON")==0) pwr=ON;
                else if (strcmp(answer,"OFF")==0) pwr=OFF;
                else pwr=UNKNOWN;
                if (pwr==ON)
                {
                    printf("Waiting 2s (power on sequence) ...");
                    sleep(2);
                    printf("done\n");
                }
            }
            if (pwr==ON)
            {
                /*txrx(fd,"DISPPIN\n",answer);
                printf("Display bus: %s\n",answer);*/
                txrx(fd,"DISP\n",answer);
                int val,valn,vald;
                sscanf(answer,"%d.%d",&valn,&vald);
                val=valn*10+vald;
                printf("Display value: %d.%dMHz\n",valn,vald);
                success = true; // success
            }
            break;
        case PWR_OFF:
            if (pwr==OFF) // if power off .. just say it's off
            {
                printf("Power: %s\n",answer);
                break;
            }
            // set power OFF
            write(fd,"PWR OFF\n",strlen("PWR OFF\n"));
            // get new power status (and show)
            txrx(fd,"PWR\n",answer);
            printf("Power: %s\n",answer);
            if (strcmp(answer,"ON")==0) pwr=ON;
            else if (strcmp(answer,"OFF")==0) pwr=OFF;
            else pwr=UNKNOWN;
            if (pwr==OFF) success = true; // success
            break;
        case SWAP_PWR:
            // set power status
            if (pwr==ON) write(fd,"PWR OFF\n",strlen("PWR OFF\n"));
            else if (pwr==OFF) write(fd,"PWR ON\n",strlen("PWR ON\n"));
            // get new power status (and show)
            txrx(fd,"PWR\n",answer);
            printf("Power: %s\n",answer);
            if (strcmp(answer,"ON")==0) pwr=ON;
            else if (strcmp(answer,"OFF")==0) pwr=OFF;
            else pwr=UNKNOWN;
            if (pwr!=UNKNOWN) success = true;
            break;
        case TUNE:
            if (pwr!=ON) // if power off .. just say it's off
            {
                printf("Power: %s\n",answer);
            }
            else
            {
                txrx(fd,"DISP\n",answer);
                int val,valn,vald;
                sscanf(answer,"%d.%d",&valn,&vald);
                val=valn*10+vald;
                printf("Display value: %d.%dMHz\n",valn,vald);
                int dif = tuneval-val;
                if (dif!=0)
                {
                    bool forw = true;
                    if (dif<0) {dif=-dif; forw=false;}
                    printf("Tune %d steps ",dif);
                    if (forw) printf("forward\n"); else printf("backward\n");
                    // press ch button
                    write(fd,"PRESS2\n",7);
                    usleep(150000);
                    write(fd,"PRESS0\n",7);
                    usleep(250000);
                    for (i=0;i<dif;i++)
                    {
                        if (forw) write(fd,"PRESS4\n",7); else write(fd,"PRESS1\n",7);
                        usleep(150000);
                        write(fd,"PRESS0\n",7);
                        usleep(250000);
                    }
                    printf("Tuned ... wait exit tune mode\n");
                    sleep(5);
                    txrx(fd,"DISP\n",answer);
                    sscanf(answer,"%d.%d",&valn,&vald);
                    val=valn*10+vald;
                    printf("Display value: %d.%dMHz\n",valn,vald);
                    if (val==tuneval) success = true;
                }
                else
                {
                    printf("Already tuned on desired value\n");
                    success = true;
                }
            }
            break;
        default:
            printf("Power: %s\n",answer);
            if (pwr==ON)
            {
                /*txrx(fd,"DISPPIN\n",answer);
                printf("Display bus: %s\n",answer);*/
                txrx(fd,"DISP\n",answer);
                int val,valn,vald;
                sscanf(answer,"%d.%d",&valn,&vald);
                val=valn*10+vald;
                printf("Display value: %d.%dMHz\n",valn,vald);
                success=true;
            }
            break;
    }

    // close serial port
    close_port(fd);
    if (success) return(0);
    return(-1);
}
