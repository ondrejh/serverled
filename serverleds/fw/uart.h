/** uart module header */

#ifndef __UART_H
#define __UART_H

/// uart initialization
void init_uart(void);

/// uart putchar function
int8_t uart_putchar(uint8_t c);

#endif
