/** rs485 module */

/// include section
#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#include "uart.h"
#include "board.h"
#include "disp.h"
#include "button.h"

/// definitions
#define RX_DONE ((UCSR0A&(1<<RXC0))!=0)
#define RX_CLEAR() {UCSR0A|=(1<<RXC0);}
#define TX_DONE ((UCSR0A&(1<<TXC0))!=0)
#define TX_CLEAR() {UCSR0A|=1<<TXC0;}
#define TX_DTE ((UCSR0A&(1<<UDRE0))!=0)

/// global variables
//bool echo = true;
bool echo = false;

#define TXBUF_SIZE 0x50
char tx_buff[TXBUF_SIZE];
uint8_t tx_buff_inptr = 0;
uint8_t tx_buff_outptr = 0;

#define RXBUF_SIZE 0x10
char rx_buff[RXBUF_SIZE];
uint8_t rx_buff_ptr = 0;

// uart initialization
void init_uart(void)
{
	// init uart
	UCSR0A = (1<<U2X0); // double speed
	UCSR0B = (1<<RXEN0) | (1<<TXEN0); // enable rx & tx
	UBRR0 = 34; // 57600 Baud // 16.0MHz
}

char i2hex(uint8_t b)
{
    if (b<0x0A) return '0'+b;
    if (b<0x10) return 'A'-10+b;
    return '?';
}

void uart_print_uint8(uint8_t b)
{
    uart_putch(i2hex((b>>4)&0x0F));
    uart_putch(i2hex(b&0x0F));
    //uart_putch(' ');
}

void uart_print_disp(uint16_t val)
{
    uint8_t d3,d2,d1,d0;
    d3 = (uint16_t)val/1000;
    d2 = (uint16_t)val%1000/100;
    d1 = (uint16_t)val%100/10;
    d0 = (uint16_t)val%10;
    if (d3>0) uart_putch(i2hex(d3));
    uart_putch(i2hex(d2));
    uart_putch(i2hex(d1));
    uart_putch('.');
    uart_putch(i2hex(d0));
}

// put char function
void uart_putch(char c)
{
	// increase buffer input pointer
	uint8_t i = tx_buff_inptr+1;
	if (i>=TXBUF_SIZE) i=0;
	// insert char
	tx_buff[i] = c;
	// save pointer
	tx_buff_inptr = i;
}

// puts function
uint8_t uart_puts(const char *s)
{
    uint8_t i=0;
    uint8_t len=strlen(s);
    for (i=0;i<len;i++) uart_putch(s[i]);
    uart_putch('\n');
    return ++i;
}

// uart polling function
void uart_polling(void)
{
	//static char command = 0;
	//static uint16_t input = 0;

    // transmitter
	if ((TX_DTE) && (tx_buff_outptr!=tx_buff_inptr))
	{
		// increase buffer output pointer
		uint8_t i = tx_buff_outptr+1;
		if (i>=TXBUF_SIZE) i=0;
		// send char
		UDR0 = tx_buff[i];
		tx_buff_outptr = i;
	}
	else if (TX_DONE)
	{
		TX_CLEAR();
	}

	// receiver
	if (RX_DONE)
	{
		char c;

        // test Frame Error, Data OverRun and Parity Error flags
	    if (UCSR0A&((1<<FE0)|(1<<DOR0)|(1<<UPE0)))
	    {
            c = UDR0; // receive char
	        RX_CLEAR(); // some error .. clear receive flag
	        return;
	    }

	    c = UDR0; // receive char
	    RX_CLEAR(); // clear rx flag

	    if (echo) uart_putch(c);

        // receive message (and test end char)
        if ((c=='\n')||(c=='\0')) // end char
        {
            // close message
            rx_buff[rx_buff_ptr]='\0';
            proceed_message();
            rx_buff_ptr=0;
        }
        else
        {
            rx_buff[rx_buff_ptr++]=c; // save char into buffer
            if (rx_buff_ptr==RXBUF_SIZE) rx_buff_ptr--; // buffersize limit
        }
	}
}

/** proceed incoming message */
void proceed_message(void)
{
    if (rx_buff_ptr>0) // is there something in the buffer?
    {
        uint8_t len=strlen(rx_buff);
        // DEVICE
        if ((len==MSGLEN_DEVICE) && (strncmp(rx_buff,MSG_DEVICE,MSGLEN_DEVICE)==0))
        {
            uart_puts(DEVICE);
            return;
        }
        // VERSION
        if ((len==MSGLEN_VERSION) && (strncmp(rx_buff,MSG_VERSION,MSGLEN_VERSION)==0))
        {
            uart_puts(VERSION);
            return;
        }
        // PWR (get power state)
        if ((len==MSGLEN_PWR) && (strncmp(rx_buff,MSG_PWR,MSGLEN_PWR)==0))
        {
            if (PWR) uart_puts((const char *)"ON");
            else     uart_puts((const char *)"OFF");
            return;
        }
        // PWR ON (set power on)
        if ((len==MSGLEN_PWR_ON) && (strncmp(rx_buff,MSG_PWR_ON,MSGLEN_PWR_ON)==0))
        {
            PWR_ON();
            return;
        }
        // PWR OFF (set power off)
        if ((len==MSGLEN_PWR_OFF) && (strncmp(rx_buff,MSG_PWR_OFF,MSGLEN_PWR_OFF)==0))
        {
            PWR_OFF();
            return;
        }
        // DISPADC
        if ((len==MSGLEN_DISPADC) && (strncmp(rx_buff,MSG_DISPADC,MSGLEN_DISPADC)==0))
        {
            int i,j;
            for (j=0;j<4;j++)
            {
                for (i=0;i<6;i++) uart_print_uint8(pinadc[j][i]);
                uart_putch(',');
            }
            uart_putch('\n');
            return;
        }
        // DISPPIN
        if ((len==MSGLEN_DISPPIN) && (strncmp(rx_buff,MSG_DISPPIN,MSGLEN_DISPPIN)==0))
        {
            int i;
            for (i=0;i<4;i++) uart_print_uint8(pindisp[i]);
            uart_putch('\n');
            return;
        }
        // DISP
        if ((len==MSGLEN_DISP) && (strncmp(rx_buff,MSG_DISP,MSGLEN_DISP)==0))
        {
            uart_print_disp(disp_value);
            uart_putch('\n');
        }
        // ECHO ON (set echo on)
        if ((len==MSGLEN_ECHO_ON) && (strncmp(rx_buff,MSG_ECHO_ON,MSGLEN_ECHO_ON)==0))
        {
            echo = true;
            return;
        }
        // ECHO OFF (set echo off)
        if ((len==MSGLEN_ECHO_OFF) && (strncmp(rx_buff,MSG_ECHO_OFF,MSGLEN_ECHO_OFF)==0))
        {
            echo = false;
            return;
        }
        // PRES BUTTON
        if ((len==MSGLEN_PRESB+1) && (strncmp(rx_buff,MSG_PRESB,MSGLEN_PRESB)==0))
        {
            unsigned int b = 0xFF;
            if (sscanf(&rx_buff[MSGLEN_PRESB],"%01X",&b)==1)
            {
                if ((b&0x01)!=0) btn_down(0); else btn_up(0);
                if ((b&0x02)!=0) btn_down(1); else btn_up(1);
                if ((b&0x04)!=0) btn_down(2); else btn_up(2);
                presb=b;
                return;
            }
            return;
        }
    }
}
