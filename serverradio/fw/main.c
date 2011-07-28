/** avr charger project
 *  author:
 *  date:
 *  version:
 */

#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
//#include <avr/wdt.h>

#include "uart.h"
#include "board.h"

/** global variables */

/** main function */
int main(void)
{
    //wdt_reset();
    //wdt_enable(WDTO_8S);

	// initialization
    init_ios();
	//init_timer();
	init_uart();
	sei();

	LED_ON();

    // main loop
    while(1)
    {
		uart_polling();
		//timer_polling();
    }

    // unexpected programm end
    return -1;
}
