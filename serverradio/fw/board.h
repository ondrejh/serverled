/** close hw dependent functions (header file) */

#ifndef _BOARD_H
#define _BOARD_H

#define DEVICE ((const char *)("Arduino FM transmitter"))
#define VERSION ((const char *)("FW "__DATE__" DEBUG\n"))

/// radio power on output PB2 (active high)
#define PWR ((PORTB&0x02)!=0)
#define PWR_ON() PORTB|=0x02
#define PWR_OFF() PORTB&=~0x02

/// arduino debug led output PB5 (active high)
#define LED_ON() PORTB|=0x20
#define LED_OFF() PORTB&=~0x20

/** initialization of peripherals */
void init_ios(void);

#endif
