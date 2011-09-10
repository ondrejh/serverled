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

/** global variables */

/// all leds green
void all_leds_green(void)
{
    // init spi
    DDRB |= (1<<PIN2)|(1<<PIN3)|(1<<PIN5);
    PORTB &= ~((1<<PIN2)|(1<<PIN3)|(1<<PIN5));
    SPCR = (1<<SPE) | (1<<MSTR);
    SPDR = 0xAA;
    while ((SPSR&(1<<SPIF))==0) {};
    SPDR = 0xAA;
    while ((SPSR&(1<<SPIF))==0) {};
    SPDR = 0xAA;
    while ((SPSR&(1<<SPIF))==0) {};
    SPDR = 0xAA;
    while ((SPSR&(1<<SPIF))==0) {};
    PORTB^=(1<<PIN2);
    PORTB^=(1<<PIN2);
}

/** main function */
int main(void)
{
    //wdt_reset();
    //wdt_enable(WDTO_8S);

	// initialization
	all_leds_green();
	//sei();

    // main loop
    while(1)
    {
    }

    // unexpected programm end
    return -1;
}
