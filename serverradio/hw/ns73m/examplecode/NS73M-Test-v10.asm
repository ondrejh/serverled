
; CC5X Version 3.1I, Copyright (c) B Knudsen Data
; C compiler for the PICmicro family
; ************  20. Sep 2007  14:51  *************

	processor  16F88
	radix  DEC

INDF        EQU   0x00
PCL         EQU   0x02
FSR         EQU   0x04
PORTA       EQU   0x05
TRISA       EQU   0x85
PORTB       EQU   0x06
TRISB       EQU   0x86
PCLATH      EQU   0x0A
Carry       EQU   0
Zero_       EQU   2
RP0         EQU   5
RP1         EQU   6
IRP         EQU   7
GIE         EQU   7
RCSTA       EQU   0x18
TXREG       EQU   0x19
RCREG       EQU   0x1A
TXSTA       EQU   0x98
SPBRG       EQU   0x99
ANSEL       EQU   0x9B
PEIE        EQU   6
TXIF        EQU   4
RCIF        EQU   5
CREN        EQU   4
SPEN        EQU   7
TXIE        EQU   4
RCIE        EQU   5
BRGH        EQU   2
SYNC        EQU   4
TXEN        EQU   5
x           EQU   0x7F
x_2         EQU   0x25
y           EQU   0x27
z           EQU   0x28
x_3         EQU   0x7F
y_2         EQU   0x7F
want_ints   EQU   0
want_ints_2 EQU   0
nate        EQU   0x31
counter     EQU   0x7F
x_4         EQU   0x31
nate_2      EQU   0x21
my_byte     EQU   0x22
i           EQU   0x24
k           EQU   0x25
m           EQU   0x26
temp        EQU   0x27
high_byte   EQU   0x28
low_byte    EQU   0x29
C1cnt       EQU   0x31
C2tmp       EQU   0x32
C3cnt       EQU   0x31
C4tmp       EQU   0x32
C5cnt       EQU   0x31
C6tmp       EQU   0x32
C7rem       EQU   0x34
outgoing_address EQU   0x21
outgoing_data EQU   0x22
incoming_byte EQU   0x23
x_5         EQU   0x24
ci          EQU   0x31

	GOTO main

  ; FILE C:\Global\Code\16F88\NS73M-Testing\NS73M-Test-v10.c
			;/*
			;    9-19-07
			;    Nathan Seidle
			;    nathan@sparkfun.com
			;    Copyright Spark Fun Electronics© 2007
			;    
			;    Designed to work with the 16F88 bootloader from SparkFun
			;    
			;    NS73M Software Example Control over 3-wire (SPI-ish)
			;    
			;    This is a small FM module capable of transmitting up to 2mW on
			;    FM channels 87.5 to 108.0MHz.
			;    
			;    Be sure to calculate your FM freq correct for registers 3 and 4. More
			;    information on page 17 of the datasheet.
			;    
			;    A good antenna is a piece of wire 31 inches long. 
			;    c / f = 3E8m/s / 95MHz = 3.157m
			;    1/4 wave = 0.789m = 31.06inches  
			;*/
			;
			;#define Clock_8MHz
			;#define Baud_9600
			;
			;#include "C:\Global\Code\C\16F88.h"  //Device dependent interrupt definitions
			;
			;#pragma origin 4
	ORG 0x0004

  ; FILE C:\Global\Code\Pics\Code\Delay.c
			;/*
			;    7/23/02
			;    Nathan Seidle
			;    nathan.seidle@colorado.edu
			;    
			;    Delays for... Well, everything.
			;    
			;    11-11 Updated the delays - now they actually delay what they say they should.
			;    
			;    10-11-03 Updated delays. New CC5X compiler is muy optimized.
			;
			;*/
			;
			;//Really short delay
			;void delay_us(uns16 x)
			;{
_const1
	MOVWF ci
	CLRF  PCLATH
	MOVF  ci,W
	ANDLW .31
	ADDWF PCL,1
	RETLW .10
	RETLW .13
	RETLW .78
	RETLW .83
	RETLW .55
	RETLW .51
	RETLW .77
	RETLW .32
	RETLW .84
	RETLW .101
	RETLW .115
	RETLW .116
	RETLW .105
	RETLW .110
	RETLW .103
	RETLW .0
	RETLW .13
	RETLW .10
	RETLW .32
	RETLW .84
	RETLW .101
	RETLW .115
	RETLW .116
	RETLW .105
	RETLW .110
	RETLW .103
	RETLW .32
	RETLW .68
	RETLW .111
	RETLW .110
	RETLW .101
	RETLW .0
delay_us
			;
			;#ifdef Clock_4MHz
			;    //Calling with 10us returns 69us
			;    for ( ; x > 0 ; x--);
			;#endif
			;
			;#ifdef Clock_8MHz
			;    //Calling with 1us returns 11us
			;    //Calling with 10us returns 56us
			;    //for ( ; x > 0 ; x--);
			;    
			;    //Calling with 1us returns 7.5us
			;    //Calling with 10us returns 48
			;    //Calling with 1000us returns 4.5ms
			;    while(--x); 
m001	DECF  x,1
	INCF  x,W
	BTFSC 0x03,Zero_
	DECF  x+1,1
	MOVF  x,W
	IORWF x+1,W
	BTFSS 0x03,Zero_
	GOTO  m001
			;
			;    //while(x--); 
			;#endif
			;
			;#ifdef Clock_9216MHz
			;    //Copied from 8MHz - not tested
			;    while(--x); 
			;#endif
			;
			;#ifdef Clock_10MHz
			;    //delay_us(1) = 6.4us
			;    //delay_us(10) = 16.8us
			;    //delay_us(100) = 110.4us
			;    while(x > 4) x -= 5;
			;#endif
			;
			;#ifdef Clock_20MHz
			;    //Calling with 10us returns 13 us
			;    //Calling with 1us returns 1.8us
			;    while(--x) nop(); 
			;#endif
			;
			;}
	RETURN
			;
			;//General short delay
			;void delay_ms(uns16 x)
			;{
delay_ms
			;
			;#ifdef Clock_4MHz
			;    //Clocks out at 1002us per 1ms
			;    int y;
			;    for ( ; x > 0 ; x--)
			;        for ( y = 0 ; y < 108 ; y++);
			;#endif
			;
			;#ifdef Clock_8MHz
			;    //Clocks out at 1006us per 1ms
			;    uns8 y, z;
			;    for ( ; x > 0 ; x--)
m002	MOVF  x_2,W
	IORWF x_2+1,W
	BTFSC 0x03,Zero_
	GOTO  m007
			;        for ( y = 0 ; y < 4 ; y++)
	CLRF  y
m003	MOVLW .4
	SUBWF y,W
	BTFSC 0x03,Carry
	GOTO  m006
			;            for ( z = 0 ; z < 69 ; z++);
	CLRF  z
m004	MOVLW .69
	SUBWF z,W
	BTFSC 0x03,Carry
	GOTO  m005
	INCF  z,1
	GOTO  m004
m005	INCF  y,1
	GOTO  m003
m006	DECF  x_2,1
	INCF  x_2,W
	BTFSC 0x03,Zero_
	DECF  x_2+1,1
	GOTO  m002
			;#endif
			;
			;#ifdef Clock_9216MHz
			;    //Copied from 8MHz - not tested
			;    uns8 y, z;
			;    for ( ; x > 0 ; x--)
			;        for ( y = 0 ; y < 4 ; y++)
			;            for ( z = 0 ; z < 69 ; z++);
			;#endif
			;
			;#ifdef Clock_10MHz
			;    //delay_ms(1) = 1.006ms
			;    //delay_ms(10) = 10.02ms
			;    //delay_ms(100) = 100.16ms
			;
			;    uns8 y, z;
			;    for ( ; x > 0 ; x--)
			;        for ( y = 0 ; y < 4 ; y++)
			;            for ( z = 0 ; z < 87 ; z++);
			;#endif
			;
			;#ifdef Clock_20MHz
			;
			;    uns8 y, z;
			;    //Clocks out to 1.00ms per 1ms
			;    //9.99 ms per 10ms
			;    for ( ; x > 0 ; x--)
			;        for ( y = 0 ; y < 4 ; y++)
			;            for ( z = 0 ; z < 176 ; z++);
			;#endif
			;
			;}
m007	RETURN
			;
			;//Delays in 31.25kHz Low Power mode using the internal 31.25kHz oscillator
			;void delay_s_lp(uns16 x)
			;{
delay_s_lp
			;
			;    uns16 y;
			;    //Clocks out to 1.001s per 1s
			;    for ( ; x > 0 ; x--)
m008	MOVF  x_3,W
	IORWF x_3+1,W
	BTFSC 0x03,Zero_
	GOTO  m012
			;        for ( y = 0 ; y < 775 ; y++);
	CLRF  y_2
	CLRF  y_2+1
m009	MOVLW .3
	SUBWF y_2+1,W
	BTFSS 0x03,Carry
	GOTO  m010
	BTFSS 0x03,Zero_
	GOTO  m011
	MOVLW .7
	SUBWF y_2,W
	BTFSC 0x03,Carry
	GOTO  m011
m010	INCF  y_2,1
	BTFSC 0x03,Zero_
	INCF  y_2+1,1
	GOTO  m009
m011	DECF  x_3,1
	INCF  x_3,W
	BTFSC 0x03,Zero_
	DECF  x_3+1,1
	GOTO  m008

  ; FILE C:\Global\Code\16F88\NS73M-Testing\NS73M-Test-v10.c
			;
			;#include "C:\Global\Code\Pics\Code\Delay.c"   //Standard delays
m012	RETURN

  ; FILE C:\Global\Code\Pics\Code\stdio.c
			;/*
			;    5/21/02
			;    Nathan Seidle
			;    nathan.seidle@colorado.edu
			;    
			;    Serial Out Started on 5-21
			;    rs_out Perfected on 5-24
			;    
			;    1Wire Serial Comm works with 4MHz Xtal
			;    Connect Serial_Out to Pin2 on DB9 Serial Connector
			;    Connect Pin5 on DB9 Connector to Signal Ground
			;    9600 Baud 8-N-1
			;    
			;    5-21 My first real C and Pic program.
			;    5-24 Attempting 20MHz implementation
			;    5-25 20MHz works
			;    5-25 Serial In works at 4MHz
			;    5-25 Passing Strings 9:20
			;    5-25 Option Selection 9:45
			;
			;    6-9  'Stdio.c' created. Printf working with %d and %h
			;    7-20 Added a longer delay after rs_out
			;         Trying to get 20MHz on the 16F873 - I think the XTal is bad.
			;         20MHz also needs 5V Vdd. Something I dont have.
			;    2-9-03 Overhauled the 4MHz timing. Serial out works very well now.
			;    
			;    6-16-03 Discovered how to pass string in cc5x
			;        void test(const char *str);
			;        test("zbcdefghij"); TXREG = str[1];
			;        
			;        Moved to hardware UART. Old STDIO will be in goodworks.
			;        
			;        Works great! Even got the special print characters (\n, \r, \0) to work.
			;    
			;    4-25-04 Added new %d routine to print 16 bit signed decimal numbers without leading 0s.
			;        
			;
			;*/
			;
			;//Setup the hardware UART TX module
			;void enable_uart_TX(bit want_ints)
			;{
enable_uart_TX
			;    BRGH = 0; //Normal speed UART
	BSF   0x03,RP0
	BCF   0x03,RP1
	BCF   0x98,BRGH
			;
			;    SYNC = 0;
	BCF   0x98,SYNC
			;    SPEN = 1;
	BCF   0x03,RP0
	BSF   0x18,SPEN
			;
			;#ifdef Clock_4MHz
			;    #ifdef Baud_9600
			;    SPBRG = 6; //4MHz for 9600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Clock_8MHz
			;    #ifdef Baud_4800
			;    SPBRG = 25; //8MHz for 4800 Baud
			;    #endif
			;    #ifdef Baud_9600
			;    SPBRG = 12; //8MHz for 9600 Baud
	MOVLW .12
	BSF   0x03,RP0
	MOVWF SPBRG
			;    #endif
			;    #ifdef Baud_57600
			;    BRGH = 1; //High speed UART
			;    SPBRG = 7; //8MHz for 57600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Crazy_Osc
			;    #ifdef Baud_9600
			;    SPBRG = 32; //20MHz for 9600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Clock_20MHz
			;    #ifdef Baud_9600
			;    SPBRG = 31; //20MHz for 9600 Baud
			;    #endif
			;
			;    #ifdef Baud_4800
			;    SPBRG = 64; //20MHz for 4800 Baud
			;    #endif
			;#endif
			;
			;    if(want_ints) //Check if we want to turn on interrupts
	BTFSS 0x7F,want_ints
	GOTO  m013
			;    {
			;        TXIE = 1;
	BSF   0x8C,TXIE
			;        PEIE = 1;
	BSF   0x0B,PEIE
			;        GIE = 1;
	BSF   0x0B,GIE
			;    }
			;
			;    TXEN = 1; //Enable transmission
m013	BSF   0x98,TXEN
			;}    
	RETURN
			;
			;//Setup the hardware UART RX module
			;void enable_uart_RX(bit want_ints)
			;{
enable_uart_RX
			;
			;    BRGH = 0; //Normal speed UART
	BSF   0x03,RP0
	BCF   0x03,RP1
	BCF   0x98,BRGH
			;
			;    SYNC = 0;
	BCF   0x98,SYNC
			;    SPEN = 1;
	BCF   0x03,RP0
	BSF   0x18,SPEN
			;
			;#ifdef Clock_4MHz
			;    #ifdef Baud_9600
			;    SPBRG = 6; //4MHz for 9600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Clock_8MHz
			;    #ifdef Baud_4800
			;    SPBRG = 25; //8MHz for 4800 Baud
			;    #endif
			;    #ifdef Baud_9600
			;    SPBRG = 12; //8MHz for 9600 Baud
	MOVLW .12
	BSF   0x03,RP0
	MOVWF SPBRG
			;    #endif
			;    #ifdef Baud_57600
			;    BRGH = 1; //High speed UART
			;    SPBRG = 8; //8MHz for 57600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Crazy_Osc
			;    #ifdef Baud_9600
			;    SPBRG = 32; //20MHz for 9600 Baud
			;    #endif
			;#endif
			;
			;#ifdef Clock_20MHz
			;    #ifdef Baud_9600
			;    SPBRG = 31; //20MHz for 9600 Baud
			;    #endif
			;
			;    #ifdef Baud_4800
			;    SPBRG = 64; //20MHz for 4800 Baud
			;    #endif
			;#endif
			;
			;    CREN = 1;
	BCF   0x03,RP0
	BSF   0x18,CREN
			;
			;    //WREN = 1;
			;
			;    if(want_ints) //Check if we want to turn on interrupts
	BTFSS 0x7F,want_ints_2
	GOTO  m014
			;    {
			;        RCIE = 1;
	BSF   0x03,RP0
	BSF   0x8C,RCIE
			;        PEIE = 1;
	BSF   0x0B,PEIE
			;        GIE = 1;
	BSF   0x0B,GIE
			;    }
			;
			;}    
m014	BSF   0x03,RP0
	RETURN
			;
			;//Sends nate to the Transmit Register
			;void putc(uns8 nate)
			;{
putc
	MOVWF nate
			;    while(TXIF == 0);
m015	BTFSS 0x0C,TXIF
	GOTO  m015
			;    TXREG = nate;
	MOVF  nate,W
	MOVWF TXREG
			;}
	RETURN
			;
			;uns8 getc(void)
			;{
getc
			;    while(RCIF == 0);
	BCF   0x03,RP0
	BCF   0x03,RP1
m016	BTFSS 0x0C,RCIF
	GOTO  m016
			;    return (RCREG);
	MOVF  RCREG,W
	RETURN
			;}    
			;
			;uns8 scanc(void)
			;{
scanc
			;    uns16 counter = 0;
	CLRF  counter
	CLRF  counter+1
			;    
			;    //CREN = 0;
			;    //CREN = 1;
			;    
			;    RCIF = 0;
	BCF   0x03,RP0
	BCF   0x03,RP1
	BCF   0x0C,RCIF
			;    while(RCIF == 0)
m017	BTFSC 0x0C,RCIF
	GOTO  m018
			;    {
			;        counter++;
	INCF  counter,1
	BTFSC 0x03,Zero_
	INCF  counter+1,1
			;        if(counter == 1000) return 0;
	MOVF  counter,W
	XORLW .232
	BTFSS 0x03,Zero_
	GOTO  m017
	MOVF  counter+1,W
	XORLW .3
	BTFSS 0x03,Zero_
	GOTO  m017
	RETLW .0
			;    }
			;    
			;    return (RCREG);
m018	MOVF  RCREG,W
	RETURN
			;}    
			;
			;//Returns ASCII Decimal and Hex values
			;uns8 bin2Hex(char x)
			;{
bin2Hex
	MOVWF x_4
			;   skip(x);
	CLRF  PCLATH
	MOVF  x_4,W
	ADDWF PCL,1
			;   #pragma return[16] = "0123456789ABCDEF"
	RETLW .48
	RETLW .49
	RETLW .50
	RETLW .51
	RETLW .52
	RETLW .53
	RETLW .54
	RETLW .55
	RETLW .56
	RETLW .57
	RETLW .65
	RETLW .66
	RETLW .67
	RETLW .68
	RETLW .69
	RETLW .70
			;}
			;
			;//Prints a string including variables
			;void printf(const char *nate, int16 my_byte)
			;{
printf
			;  
			;    uns8 i, k, m, temp;
			;    uns8 high_byte = 0, low_byte = 0;
	CLRF  high_byte
	CLRF  low_byte
			;    uns8 y, z;
			;    
			;    uns8 decimal_output[5];
			;    
			;    for(i = 0 ; ; i++)
	CLRF  i
			;    {
			;        //delay_ms(3);
			;        
			;        k = nate[i];
m019	MOVF  i,W
	ADDWF nate_2,W
	CALL  _const1
	MOVWF k
			;
			;        if (k == '\0') 
	MOVF  k,1
	BTFSC 0x03,Zero_
			;            break;
	GOTO  m045
			;
			;        else if (k == '%') //Print var
	XORLW .37
	BTFSS 0x03,Zero_
	GOTO  m043
			;        {
			;            i++;
	INCF  i,1
			;            k = nate[i];
	MOVF  i,W
	ADDWF nate_2,W
	CALL  _const1
	MOVWF k
			;
			;            if (k == '\0') 
	MOVF  k,1
	BTFSC 0x03,Zero_
			;                break;
	GOTO  m045
			;            else if (k == '\\') //Print special characters
	XORLW .92
	BTFSS 0x03,Zero_
	GOTO  m020
			;            {
			;                i++;
	INCF  i,1
			;                k = nate[i];
	MOVF  i,W
	ADDWF nate_2,W
	CALL  _const1
	MOVWF k
			;                
			;                putc(k);
	CALL  putc
			;                
			;
			;            } //End Special Characters
			;            else if (k == 'b') //Print Binary
	GOTO  m044
m020	MOVF  k,W
	XORLW .98
	BTFSS 0x03,Zero_
	GOTO  m025
			;            {
			;                for( m = 0 ; m < 8 ; m++ )
	CLRF  m
m021	MOVLW .8
	SUBWF m,W
	BTFSC 0x03,Carry
	GOTO  m044
			;                {
			;                    if (my_byte.7 == 1) putc('1');
	BTFSS my_byte,7
	GOTO  m022
	MOVLW .49
	CALL  putc
			;                    if (my_byte.7 == 0) putc('0');
m022	BTFSC my_byte,7
	GOTO  m023
	MOVLW .48
	CALL  putc
			;                    if (m == 3) putc(' ');
m023	MOVF  m,W
	XORLW .3
	BTFSS 0x03,Zero_
	GOTO  m024
	MOVLW .32
	CALL  putc
			;                    
			;                    my_byte = my_byte << 1;
m024	BCF   0x03,Carry
	RLF   my_byte,1
	RLF   my_byte+1,1
			;                }
	INCF  m,1
	GOTO  m021
			;            } //End Binary               
			;            else if (k == 'd') //Print Decimal
m025	MOVF  k,W
	XORLW .100
	BTFSS 0x03,Zero_
	GOTO  m039
			;            {
			;                //Print negative sign and take 2's compliment
			;                
			;                if(my_byte < 0)
	BTFSS my_byte+1,7
	GOTO  m028
			;                {
			;                    putc('-');
	MOVLW .45
	CALL  putc
			;                    my_byte *= -1;
	MOVF  my_byte,W
	MOVWF C2tmp
	MOVF  my_byte+1,W
	MOVWF C2tmp+1
	MOVLW .16
	MOVWF C1cnt
m026	BCF   0x03,Carry
	RLF   my_byte,1
	RLF   my_byte+1,1
	RLF   C2tmp,1
	RLF   C2tmp+1,1
	BTFSS 0x03,Carry
	GOTO  m027
	DECF  my_byte+1,1
	DECF  my_byte,1
	INCFSZ my_byte,W
	INCF  my_byte+1,1
m027	DECFSZ C1cnt,1
	GOTO  m026
			;                }
			;                
			;                
			;                if (my_byte == 0)
m028	MOVF  my_byte,W
	IORWF my_byte+1,W
	BTFSS 0x03,Zero_
	GOTO  m029
			;                    putc('0');
	MOVLW .48
	CALL  putc
			;                else
	GOTO  m044
			;                {
			;                    //Divide number by a series of 10s
			;                    for(m = 4 ; my_byte > 0 ; m--)
m029	MOVLW .4
	MOVWF m
m030	BTFSC my_byte+1,7
	GOTO  m037
	MOVF  my_byte,W
	IORWF my_byte+1,W
	BTFSC 0x03,Zero_
	GOTO  m037
			;                    {
			;                        temp = my_byte % (uns16)10;
	MOVF  my_byte,W
	MOVWF C4tmp
	MOVF  my_byte+1,W
	MOVWF C4tmp+1
	CLRF  temp
	MOVLW .16
	MOVWF C3cnt
m031	RLF   C4tmp,1
	RLF   C4tmp+1,1
	RLF   temp,1
	BTFSC 0x03,Carry
	GOTO  m032
	MOVLW .10
	SUBWF temp,W
	BTFSS 0x03,Carry
	GOTO  m033
m032	MOVLW .10
	SUBWF temp,1
m033	DECFSZ C3cnt,1
	GOTO  m031
			;                        decimal_output[m] = temp;
	MOVLW .44
	ADDWF m,W
	MOVWF FSR
	BCF   0x03,IRP
	MOVF  temp,W
	MOVWF INDF
			;                        my_byte = my_byte / (uns16)10;               
	MOVF  my_byte,W
	MOVWF C6tmp
	MOVF  my_byte+1,W
	MOVWF C6tmp+1
	CLRF  C7rem
	MOVLW .16
	MOVWF C5cnt
m034	RLF   C6tmp,1
	RLF   C6tmp+1,1
	RLF   C7rem,1
	BTFSC 0x03,Carry
	GOTO  m035
	MOVLW .10
	SUBWF C7rem,W
	BTFSS 0x03,Carry
	GOTO  m036
m035	MOVLW .10
	SUBWF C7rem,1
	BSF   0x03,Carry
m036	RLF   my_byte,1
	RLF   my_byte+1,1
	DECFSZ C5cnt,1
	GOTO  m034
			;                    }
	DECF  m,1
	GOTO  m030
			;                
			;                    for(m++ ; m < 5 ; m++)
m037	INCF  m,1
m038	MOVLW .5
	SUBWF m,W
	BTFSC 0x03,Carry
	GOTO  m044
			;                        putc(bin2Hex(decimal_output[m]));
	MOVLW .44
	ADDWF m,W
	MOVWF FSR
	BCF   0x03,IRP
	MOVF  INDF,W
	CALL  bin2Hex
	CALL  putc
	INCF  m,1
	GOTO  m038
			;                }
			;    
			;            } //End Decimal
			;            else if (k == 'h') //Print Hex
m039	MOVF  k,W
	XORLW .104
	BTFSS 0x03,Zero_
	GOTO  m041
			;            {
			;                //New trick 3-15-04
			;                putc('0');
	MOVLW .48
	CALL  putc
			;                putc('x');
	MOVLW .120
	CALL  putc
			;                
			;                if(my_byte > 0x00FF)
	BTFSC my_byte+1,7
	GOTO  m040
	MOVF  my_byte+1,1
	BTFSC 0x03,Zero_
	GOTO  m040
			;                {
			;                    putc(bin2Hex(my_byte.high8 >> 4));
	SWAPF my_byte+1,W
	ANDLW .15
	CALL  bin2Hex
	CALL  putc
			;                    putc(bin2Hex(my_byte.high8 & 0b.0000.1111));
	MOVLW .15
	ANDWF my_byte+1,W
	CALL  bin2Hex
	CALL  putc
			;                }
			;
			;                putc(bin2Hex(my_byte.low8 >> 4));
m040	SWAPF my_byte,W
	ANDLW .15
	CALL  bin2Hex
	CALL  putc
			;                putc(bin2Hex(my_byte.low8 & 0b.0000.1111));
	MOVLW .15
	ANDWF my_byte,W
	CALL  bin2Hex
	CALL  putc
			;
			;                /*high_byte.3 = my_byte.7;
			;                high_byte.2 = my_byte.6;
			;                high_byte.1 = my_byte.5;
			;                high_byte.0 = my_byte.4;
			;            
			;                low_byte.3 = my_byte.3;
			;                low_byte.2 = my_byte.2;
			;                low_byte.1 = my_byte.1;
			;                low_byte.0 = my_byte.0;
			;        
			;                putc('0');
			;                putc('x');
			;            
			;                putc(bin2Hex(high_byte));
			;                putc(bin2Hex(low_byte));*/
			;            } //End Hex
			;            else if (k == 'f') //Print Float
	GOTO  m044
m041	MOVF  k,W
	XORLW .102
	BTFSS 0x03,Zero_
	GOTO  m042
			;            {
			;                putc('!');
	MOVLW .33
	CALL  putc
			;            } //End Float
			;            else if (k == 'u') //Print Direct Character
	GOTO  m044
m042	MOVF  k,W
	XORLW .117
	BTFSS 0x03,Zero_
	GOTO  m044
			;            {
			;                //All ascii characters below 20 are special and screwy characters
			;                //if(my_byte > 20) 
			;                    putc(my_byte);
	MOVF  my_byte,W
	CALL  putc
			;            } //End Direct
			;                        
			;        } //End Special Chars           
			;
			;        else
	GOTO  m044
			;            putc(k);
m043	MOVF  k,W
	CALL  putc
			;    }    
m044	INCF  i,1
	GOTO  m019
			;}
m045	RETURN

  ; FILE C:\Global\Code\16F88\NS73M-Testing\NS73M-Test-v10.c
			;#include "C:\Global\Code\Pics\Code\stdio.c"   //Software based Basic Serial IO
			;
			;#define CK  PORTA.1
			;#define DA  PORTA.2
			;#define LA  PORTA.3
			;#define IIC PORTA.4
			;
			;void boot_up(void);
			;
			;uns8 ns73m_3wire(uns8 outgoing_address, uns8 outgoing_data);
			;
			;void main(void)
			;{
main
			;    uns8 choice;
			;    
			;    boot_up();
	BSF   0x03,RP0
	BCF   0x03,RP1
	CALL  boot_up
			;    
			;    printf("\n\rNS73M Testing", 0);
	CLRF  nate_2
	CLRF  my_byte
	CLRF  my_byte+1
	CALL  printf
			;    
			;    delay_ms(10); //Wait for VDD to raise
	MOVLW .10
	MOVWF x_2
	CLRF  x_2+1
	CALL  delay_ms
			;    
			;    IIC = 0; //Set module into SPI mode
	BCF   PORTA,4
			;    
			;    ns73m_3wire(0x0E, 0b.0000.0101); //Software reset
	MOVLW .14
	MOVWF outgoing_address
	MOVLW .5
	CALL  ns73m_3wire
			;
			;    //Load register values with initial default values
			;    ns73m_3wire(0x01, 0b.1011.0100); //Register 1 defaults
	MOVLW .1
	MOVWF outgoing_address
	MOVLW .180
	CALL  ns73m_3wire
			;    ns73m_3wire(0x02, 0b.0000.0110); //Register 2 defaults
	MOVLW .2
	MOVWF outgoing_address
	MOVLW .6
	CALL  ns73m_3wire
			;
			;    ns73m_3wire(0x03, 0b.1000.1010); //Set broadcast freq to 97.3
	MOVLW .3
	MOVWF outgoing_address
	MOVLW .138
	CALL  ns73m_3wire
			;    ns73m_3wire(0x04, 0b.0010.1110);
	MOVLW .4
	MOVWF outgoing_address
	MOVLW .46
	CALL  ns73m_3wire
			;
			;    ns73m_3wire(0x08, 0b.0001.1010); //Register 8 defaults
	MOVLW .8
	MOVWF outgoing_address
	MOVLW .26
	CALL  ns73m_3wire
			;
			;    ns73m_3wire(0x00, 0b.0000.0001); //Flip the power switch
	CLRF  outgoing_address
	MOVLW .1
	CALL  ns73m_3wire
			;    
			;    ns73m_3wire(0x0E, 0b.0000.0101); //Software reset
	MOVLW .14
	MOVWF outgoing_address
	MOVLW .5
	CALL  ns73m_3wire
			;
			;    ns73m_3wire(0x06, 0b.0001.1110); //Set Register 6
	MOVLW .6
	MOVWF outgoing_address
	MOVLW .30
	CALL  ns73m_3wire
			;    
			;    printf("\r\n Testing Done", 0);
	MOVLW .16
	MOVWF nate_2
	CLRF  my_byte
	CLRF  my_byte+1
	CALL  printf
			;
			;    while(1);
m046	GOTO  m046
			;
			;}//End Main
			;
			;void boot_up(void)
			;{
boot_up
			;    //OSCCON = 0b.0111.0000; //Setup internal oscillator for 8MHz
			;    //while(OSCCON.2 == 0); //Wait for frequency to stabilize
			;
			;    //Setup Ports
			;    ANSEL = 0b.0000.0000; //Turn off A/D
	CLRF  ANSEL
			;
			;    TRISA = 0b.0000.0001; //Input TEB on PORTA.0
	MOVLW .1
	MOVWF TRISA
			;    PORTA = 0b.0000.0000;
	BCF   0x03,RP0
	CLRF  PORTA
			;
			;    TRISB = 0b.0001.0000;
	MOVLW .16
	BSF   0x03,RP0
	MOVWF TRISB
			;    PORTB = 0b.0001.0000;   //0 = Output, 1 = Input RX on RB4
	BCF   0x03,RP0
	MOVWF PORTB
			;
			;    //Setup the hardware UART module
			;    //=============================================================
			;    SPBRG = 51; //8MHz for 9600 inital communication baud rate
	MOVLW .51
	BSF   0x03,RP0
	MOVWF SPBRG
			;    //SPBRG = 129; //20MHz for 9600 inital communication baud rate
			;
			;    TXSTA = 0b.0010.0100; //8-bit asych mode, high speed uart enabled
	MOVLW .36
	MOVWF TXSTA
			;    RCSTA = 0b.1001.0000; //Serial port enable, 8-bit asych continous receive mode
	MOVLW .144
	BCF   0x03,RP0
	MOVWF RCSTA
			;    //=============================================================
			;}
	RETURN
			;
			;//Basic SPI send address and data bytes
			;uns8 ns73m_3wire(uns8 outgoing_address, uns8 outgoing_data)
			;{
ns73m_3wire
	MOVWF outgoing_data
			;    uns8 incoming_byte, x;
			;
			;    LA = 0;
	BCF   PORTA,3
			;    
			;    for(x = 0 ; x < 4 ; x++)
	CLRF  x_5
m047	MOVLW .4
	SUBWF x_5,W
	BTFSC 0x03,Carry
	GOTO  m048
			;    {
			;        CK = 0; //Toggle the SPI clock
	BCF   PORTA,1
			;
			;        DA = outgoing_address.0; //Put bit on SPI data bus
	BTFSS outgoing_address,0
	BCF   PORTA,2
	BTFSC outgoing_address,0
	BSF   PORTA,2
			;        outgoing_address >>= 1; //Rotate 1 bit to the right
	BCF   0x03,Carry
	RRF   outgoing_address,1
			;
			;        CK = 1;
	BSF   PORTA,1
			;    }
	INCF  x_5,1
	GOTO  m047
			;
			;    for(x = 0 ; x < 8 ; x++)
m048	CLRF  x_5
m049	MOVLW .8
	SUBWF x_5,W
	BTFSC 0x03,Carry
	GOTO  m050
			;    {
			;        CK = 0; //Toggle the SPI clock
	BCF   PORTA,1
			;
			;        DA = outgoing_data.0; //Put bit on SPI data bus
	BTFSS outgoing_data,0
	BCF   PORTA,2
	BTFSC outgoing_data,0
	BSF   PORTA,2
			;        outgoing_data >>= 1; //Rotate 1 bit to the right
	BCF   0x03,Carry
	RRF   outgoing_data,1
			;
			;        CK = 1;
	BSF   PORTA,1
			;    }
	INCF  x_5,1
	GOTO  m049
			;    
			;    LA = 1; //Latch this trasfer
m050	BSF   PORTA,3
			;    delay_ms(1); //Minimum tLAH is 250nS
	MOVLW .1
	MOVWF x_2
	CLRF  x_2+1
	CALL  delay_ms
			;    LA = 0;
	BCF   PORTA,3
			;
			;    return(incoming_byte);
	MOVF  incoming_byte,W
	RETURN

	END


; *** KEY INFO ***

; 0x0029 P0    9 word(s)  0 % : delay_us
; 0x0032 P0   24 word(s)  1 % : delay_ms
; 0x004A P0   26 word(s)  1 % : delay_s_lp
; 0x0064 P0   16 word(s)  0 % : enable_uart_TX
; 0x0074 P0   19 word(s)  0 % : enable_uart_RX
; 0x0087 P0    6 word(s)  0 % : putc
; 0x008D P0    6 word(s)  0 % : getc
; 0x0093 P0   21 word(s)  1 % : scanc
; 0x00A8 P0   20 word(s)  0 % : bin2Hex
; 0x00BC P0  215 word(s) 10 % : printf
; 0x0004 P0   37 word(s)  1 % : _const1
; 0x01C8 P0   19 word(s)  0 % : boot_up
; 0x01DB P0   40 word(s)  1 % : ns73m_3wire
; 0x0193 P0   53 word(s)  2 % : main

; RAM usage: 22 bytes (22 local), 346 bytes free
; Maximum call level: 2
;  Codepage 0 has  512 word(s) :  25 %
;  Codepage 1 has    0 word(s) :   0 %
; Total of 512 code words (12 %)
