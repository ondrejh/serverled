/** header file of uart module */

#ifndef _UART_H
#define _UART_H

/// messages
#define MSG_PWR         (const char *) "PWR"
#define MSGLEN_PWR      (const uint8_t) 3
#define MSG_PWR_ON      (const char *) "PWR ON"
#define MSGLEN_PWR_ON   (const uint8_t) 6
#define MSG_PWR_OFF     (const char *) "PWR OFF"
#define MSGLEN_PWR_OFF  (const uint8_t) 7
#define MSG_ECHO_ON     (const char *) "ECHO ON"
#define MSGLEN_ECHO_ON  (const uint8_t) 7
#define MSG_ECHO_OFF    (const char *) "ECHO OFF"
#define MSGLEN_ECHO_OFF (const uint8_t) 8

/// initialization
void init_uart(void);

/// put char function
void uart_putch(char c);

/// puts function
uint8_t uart_puts(const char *s);

/// polling function
void uart_polling(void);

/// proceed incoming message
void proceed_message(void);

#endif
