/** avr server visualization leds project
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

#include "spi.h"
#include "uart.h"

/** global variables */

/** functions */

/** main programm body */
int main(void)
{
    //wdt_reset();
    //wdt_enable(WDTO_8S);

	// initialization
	init_spi();
	init_uart();
	sei();

    // leds off
    all_leds_off();

    /*// test leds
    {
        int i;
        for (i=0;i<16;i++) set_led_pwm(i,0,i);
        //set_led_pwm(7,15,15);
    }*/

    // main loop
    while(1)
    {
        uartpooling();
    }

    // unexpected programm end
    return -1;
}
