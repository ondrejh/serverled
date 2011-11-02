/** uart module */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

#include "uart.h"
#include "spi.h"

#define TXBUFFLEN 64

char txbuffer[TXBUFFLEN];
uint8_t txbuf_inptr = 0;
uint8_t txbuf_outptr = 0;

/// hex char into int conversion
int8_t hexc2int(char c)
{
    if ((c>='0') && (c<='9')) return c-'0'; // 0 - 9
    if ((c>='A') && (c<='F')) return c-'A'+10; // A - F
    return -1; // error (no hex char)
}

/// int into hex char conversion
char int2hexc(int8_t i)
{
    if ((i>=0) && (i<=9)) return ('0'+i);
    if ((i>=0x0A) && (i<=0x0F)) return ('A'+i);
    return 0xFF;
}

/// uart putchar function
int8_t uart_putchar(char c)
{
    if ((UCSR0A&((1<<UDRE0)|(1<<TXC0)))==(1<<UDRE0)) // if no transmition in progress -> start transmition
    {
        UDR0 = c;
        return 0;
    }
    uint8_t next_bufptr = (txbuf_inptr+1);
    if (next_bufptr>=TXBUFFLEN) next_bufptr=0;
    if (next_bufptr==txbuf_outptr) // risk of buffer overflow
        return -1; // buffer full error
    txbuffer[txbuf_inptr]=c;
    txbuf_inptr=next_bufptr;
    return 0;
}

/// uart initialization
void init_uart(void)
{
    DDRD|=(1<<PIN1);
    DDRD&=~(1<<PIN0);
    #ifdef UART_USE_INTERRUPT
      UCSR0B = (1<<RXCIE0) | (1<<TXCIE0) | (1<<TXEN0) | (1<<RXEN0);
    #else
      UCSR0B = /*(1<<RXCIE0) | (1<<TXCIE0) |*/ (1<<TXEN0) | (1<<RXEN0);
    #endif

    UBRR0 = 3;  // 115.2kBaud / 7.3728MHz
}

/// uart polling function
void uartpolling(void)
{
#ifndef UART_USE_INTERRUPT
    if (UCSR0A&(1<<RXC0)) usart_rx();
    if (UCSR0A&(1<<TXC0)) usart_tx();
#endif
}

/// receive complette interrupt handler
#ifdef UART_USE_INTERRUPT
SIGNAL (USART_RX_vect)
#else
void usart_rx(void)
#endif
{
    uint8_t ucsra = UCSR0A;
    uint8_t c = UDR0;
    #ifndef UART_USE_INTERRUPT
    UCSR0A|=1<<RXC0;
    #endif

    static int8_t rxstat=0;
    static uint8_t rxbuffer[32];
    static uint8_t rxptr=0;

    // test error flags
    /*if (ucsra&((1<<FE0)|(1<<DOR0)|(1<<UPE0)))
        return; // input error
    else*/
    {
        if ((c=='s') || (c=='r')) rxstat=0;
        switch (rxstat)
        {
            case 0: // wait command
                if (c=='s') // set led command
                {
                    rxptr=0;
                    rxstat++;
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
                        else if (rxptr<33) rxptr++; // overflow with saturation
                    }
                    else rxstat=0; // unexpected char
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
#ifdef UART_USE_INTERRUPT
SIGNAL (USART_TX_vect)
{
#else
void usart_tx(void)
{
    UCSR0A|=1<<TXC0; // clear tx complette flag
#endif
    if (txbuf_outptr!=txbuf_inptr) // test if something in buffer
    {
        // send next char and increase buffer pointer
        UDR0=txbuffer[txbuf_outptr++];
        if (txbuf_outptr>=TXBUFFLEN) txbuf_outptr=0;
    }
}
