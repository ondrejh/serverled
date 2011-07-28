/** close hw dependent functions */

#include <avr/io.h>
#include "board.h"

/** initialization of peripherals */
void init_ios(void)
{
    // led PB5
    PORTB &= ~0x20;
    DDRB  |=  0x20;
    // pwr on/off PB1 (output / default low)
    PORTB &= ~0x02;
    DDRB  |=  0x02;
    // led display multiplexor inputs PD2 .. PD5 (input / no pullup)
    PORTD &= ~0x3C;
    DDRD  &= ~0x3C;
    // led display bus inputs PC0 .. PC5 (input / no pullup)
    PORTC  =  0x00;
    DDRC   =  0x00;
    // button inputs PD6, PD7, PB0 (inputs)
    PORTD &= ~0xC0;
    DDRD  &= ~0xC0;
    PORTB &= ~0x01;
    DDRD  &= ~0x01;
}
