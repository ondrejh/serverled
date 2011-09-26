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

/** global variables */

/*/// all leds green
void all_leds_green(void)
{
    // fill 0xAA into spi data
    memset(spi_data,0xAA,SPI_DATALEN);
}

/// set led on position (status 0..off, 1..red, 2..green, 3..off/high)
void set_led(uint8_t pos, uint8_t status)
{
    // test input consistency
    if (pos>15) return;
    if (status>3) return;

    uint8_t shift = (pos%4)*2;
    uint8_t spi_pos = pos/4;
    spi_data[spi_pos] = (spi_data[spi_pos]&~(0x03<<shift))|(status<<shift);
}*/

/// set led pwm
void set_led_pwm(uint8_t pos, uint8_t green_pwm, uint8_t red_pwm)
{
    if (pos>15) return;
    leds_green_val[pos]=green_pwm;
    leds_red_val[pos]=red_pwm;
}

/** main function */
int main(void)
{
    //wdt_reset();
    //wdt_enable(WDTO_8S);

	// initialization
	init_spi();
	sei();

    // test leds
    {
        int i;
        for (i=0;i<8;i++) set_led_pwm(i,2*i+1,0);
        for (i=15;i>7;i--) set_led_pwm(i,0,2*(15-i)+1);
    }

    // main loop
    while(1)
    {
    }

    // unexpected programm end
    return -1;
}
