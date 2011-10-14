/*
    9-19-07
    Nathan Seidle
    nathan@sparkfun.com
    Copyright Spark Fun Electronics© 2007
    
    Designed to work with the 16F88 bootloader from SparkFun
    
    NS73M Software Example Control over 3-wire (SPI-ish)
    
    This is a small FM module capable of transmitting up to 2mW on
    FM channels 87.5 to 108.0MHz.
    
    Be sure to calculate your FM freq correct for registers 3 and 4. More
    information on page 17 of the datasheet.
    
    A good antenna is a piece of wire 31 inches long. 
    c / f = 3E8m/s / 95MHz = 3.157m
    1/4 wave = 0.789m = 31.06inches  
*/

#define Clock_8MHz
#define Baud_9600

#include "C:\Global\Code\C\16F88.h"  //Device dependent interrupt definitions

#pragma origin 4

#include "C:\Global\Code\Pics\Code\Delay.c"   //Standard delays
#include "C:\Global\Code\Pics\Code\stdio.c"   //Software based Basic Serial IO

#define CK  PORTA.1
#define DA  PORTA.2
#define LA  PORTA.3
#define IIC PORTA.4

void boot_up(void);

uns8 ns73m_3wire(uns8 outgoing_address, uns8 outgoing_data);

void main(void)
{
    uns8 choice;
    
    boot_up();
    
    printf("\n\rNS73M Testing", 0);
    
    delay_ms(10); //Wait for VDD to raise
    
    IIC = 0; //Set module into SPI mode
    
    ns73m_3wire(0x0E, 0b.0000.0101); //Software reset

    //Load register values with initial default values
    ns73m_3wire(0x01, 0b.1011.0100); //Register 1 defaults
    ns73m_3wire(0x02, 0b.0000.0110); //Register 2 defaults

    ns73m_3wire(0x03, 0b.1000.1010); //Set broadcast freq to 97.3
    ns73m_3wire(0x04, 0b.0010.1110);

    ns73m_3wire(0x08, 0b.0001.1010); //Register 8 defaults

    ns73m_3wire(0x00, 0b.0000.0001); //Flip the power switch
    
    ns73m_3wire(0x0E, 0b.0000.0101); //Software reset

    ns73m_3wire(0x06, 0b.0001.1110); //Set Register 6
    
    printf("\r\n Testing Done", 0);

    while(1);

}//End Main

void boot_up(void)
{
    //OSCCON = 0b.0111.0000; //Setup internal oscillator for 8MHz
    //while(OSCCON.2 == 0); //Wait for frequency to stabilize

    //Setup Ports
    ANSEL = 0b.0000.0000; //Turn off A/D

    TRISA = 0b.0000.0001; //Input TEB on PORTA.0
    PORTA = 0b.0000.0000;

    TRISB = 0b.0001.0000;
    PORTB = 0b.0001.0000;   //0 = Output, 1 = Input RX on RB4

    //Setup the hardware UART module
    //=============================================================
    SPBRG = 51; //8MHz for 9600 inital communication baud rate
    //SPBRG = 129; //20MHz for 9600 inital communication baud rate

    TXSTA = 0b.0010.0100; //8-bit asych mode, high speed uart enabled
    RCSTA = 0b.1001.0000; //Serial port enable, 8-bit asych continous receive mode
    //=============================================================
}

//Basic SPI send address and data bytes
uns8 ns73m_3wire(uns8 outgoing_address, uns8 outgoing_data)
{
    uns8 incoming_byte, x;

    LA = 0;
    
    for(x = 0 ; x < 4 ; x++)
    {
        CK = 0; //Toggle the SPI clock

        DA = outgoing_address.0; //Put bit on SPI data bus
        outgoing_address >>= 1; //Rotate 1 bit to the right

        CK = 1;
    }

    for(x = 0 ; x < 8 ; x++)
    {
        CK = 0; //Toggle the SPI clock

        DA = outgoing_data.0; //Put bit on SPI data bus
        outgoing_data >>= 1; //Rotate 1 bit to the right

        CK = 1;
    }
    
    LA = 1; //Latch this trasfer
    delay_ms(1); //Minimum tLAH is 250nS
    LA = 0;

    return(incoming_byte);
}