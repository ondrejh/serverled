/** uart module header */

#ifndef __UART_H
#define __UART_H

/// uart initialization
void init_uart(void);

/// uart putchar function
int8_t uart_putchar(uint8_t c);

/// uart polling funciton
void uartpolling(void);
/// usart rx function
void usart_rx(void);
/// usart tx function
void usart_tx(void);

#endif
