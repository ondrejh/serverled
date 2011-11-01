/** uart module header */

#ifndef __UART_H
#define __UART_H

/// uart initialization
void init_uart(void);

int8_t uart_putchar(char c);

void uartpooling(void);
void usart_rx(void);
void usart_tx(void);

#endif
