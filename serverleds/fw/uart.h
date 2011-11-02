/** uart module header */

#ifndef __UART_H
#define __UART_H

/// comment to use polling
//#define UART_USE_INTERRUPT

/// uart initialization
void init_uart(void);

/// uart putchar function
int8_t uart_putchar(char c);

/// uart polling funciton
void uartpolling(void);
#ifndef UART_USE_INTERRUPT
/// usart rx function (replaced by SIGNAL if interrupt used)
void usart_rx(void);
/// usart tx function (replaced by SIGNAL if interrupt used)
void usart_tx(void);
#endif

#endif
