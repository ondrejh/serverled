/** uart module */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

#include "uart.h"
#include "spi.h"

#define TXBUFFLEN 64

uint8_t txbuffer[TXBUFFLEN];
uint8_t txbuf_inptr = 0;
uint8_t txbuf_outptr = 0;

/// hex char into int conversion
int8_t hexc2int(uint8_t c)
{
    if ((c>='0') && (c<='9')) return c-'0'; // 0 - 9
    if ((c>='A') && (c<='F')) return c-'A'+10; // A - F
    return -1; // error (no hex char)
}

/// int into hex char conversion
uint8_t int2hexc(int8_t i)
{
    if ((i>=0) && (i<=9)) return ('0'+i);
    if ((i>=0x0A) && (i<=0x0F)) return ('A'+i);
    return 0xFF;
}

/// uart putchar function
int8_t uart_putchar(uint8_t c)
{
    // calculate buffer pointer
    uint8_t next_bufptr = txbuf_inptr+1;
    if (next_bufptr>=TXBUFFLEN) next_bufptr=0;
    // test for risk of buffer overflow
    if (next_bufptr==txbuf_outptr)
        return -1; // buffer full error
    txbuffer[txbuf_inptr]=c;
    // test if its first char (if yes then start tx)
    if (txbuf_outptr==txbuf_inptr) UDR0 = c;
    // push buffer pointer
    txbuf_inptr=next_bufptr;
    // return OK
    return 0;
}

/// uart initialization
void init_uart(void)
{
    UCSR0B = (1<<RXCIE0) | (1<<TXCIE0) | (1<<TXEN0) | (1<<RXEN0);
    //UBRR0 = 3;  // 115.2kBaud / 7.3728MHz
    UBRR0 = 7;  // 57.6kBaud / 7.3728MHz
    //UBRR0 = 47; // 9.6kBaud / 7.3728MHz
}

/// receive complette interrupt handler
SIGNAL (USART_RX_vect)
//void usart_rx(void)
{
    uint8_t c;

    static int8_t rxstat=0;
    static uint8_t rxbuffer[32];
    static uint8_t rxptr=0;

    // test error flags
    if (UCSR0A&((1<<FE0)|(1<<DOR0)|(1<<UPE0)))
    {
        c = UDR0;
        return; // input error
    }
    else
    {
        c = UDR0;
        if ((c=='s') || (c=='r')) rxstat=0;
        switch (rxstat)
        {
            case 0: // wait command
                if (c=='s') // set led command
                {
                    rxptr=0;
                    rxstat=1;
                }
                else if (c=='r') // read led command
                {
                    rxptr=0;
                    rxstat=2;
                }
                break;
            case 1: // wait led data or command end
                if ((c=='\n')||(c=='\r')) // command end
                {
                    //uart_putchar(int2hexc(rxptr));
                    if (rxptr==32) // set all leds
                    {
                        int8_t i;
                        for (i=0;i<16;i++) set_led_pwm(i,rxbuffer[2*i],rxbuffer[2*i+1]);
                    }
                    else if (rxptr==3) // set one led
                    {
                        set_led_pwm(rxbuffer[0],rxbuffer[1],rxbuffer[2]);
                    }
                    rxstat=0;
                }
                else
                {
                    int8_t i=hexc2int(c);
                    if (i>=0)
                    {
                        if (rxptr<32) rxbuffer[rxptr++]=i; // save into buffer
                        else rxptr++; // overflow with saturation
                        if (rxptr>33) rxptr=33;
                    }
                    //else rxstat=0; // unexpected char
                }
                break;
            case 2: // wait pointer or command end
                if ((c=='\n')||(c=='\r'))
                {
                    if (rxptr==1) // return one led status
                    {
                        uart_putchar(int2hexc(leds_green_val[rxbuffer[0]])); // green value
                        uart_putchar(int2hexc(leds_red_val[rxbuffer[0]])); // red value
                        rxstat=0;
                    }
                    else if (rxptr==0) // return all leds status
                    {
                        int8_t i;
                        for (i=0;i<16;i++)
                        {
                            uart_putchar(int2hexc(leds_green_val[i]));
                            uart_putchar(int2hexc(leds_red_val[i]));
                            rxstat=0;
                        }
                    }
                }
                else
                {
                    int8_t i=hexc2int(c);
                    if (i>=0)
                    {
                        if (rxptr<1) rxbuffer[rxptr++]=i; // save into buffer
                        else if (rxptr<2) rxptr++; // overflow with saturation
                    }
                    else rxstat=0; // unexpected char
                }
                break;
            default:
                rxstat=0;
                break;
        }
        uart_putchar(c); // echo
    }
}

/// receive complette interrupt handler
SIGNAL (USART_TX_vect)
//void usart_tx(void)
{
    // calculate buffer pointer
    uint8_t next_bufptr = txbuf_outptr+1;
    if (next_bufptr>=TXBUFFLEN) next_bufptr=0;
    // push buffer pointer
    txbuf_outptr=next_bufptr;

    // test if something left in the buffer (if any then transmitt it)
    if (txbuf_outptr!=txbuf_inptr)
        UDR0=txbuffer[txbuf_outptr];
}
