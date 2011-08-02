/** display input module */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>

#include "disp.h"

#define ADC_START() ADCSRA|=(1<<ADSC)
#define TIMER_START() TCCR2B=(2<<CS21)
#define TIMER_STOP() TCCR2B=0

uint8_t mpin = 0xFF;
uint8_t pinadc[4][6];

/// initialization
void init_disp(void)
{
    // clear array
    memset(pinadc,0,sizeof(uint8_t)*6*4);
    // pin change interrupt on multiplexer pins PD2 - PD7
    PCMSK2 = 0x3C; // PCINT21 .. PCINT18
    PCICR = (1<<PCIE2);
    // init timer
    TCCR2A = (2<<WGM20); // CTC
    TIMSK2 = (1<<OCIE2A); // Output compare A interrup enable
    OCR2A = 200; // 100us / fosc/8
    // init ADC
    ADMUX = (1<<REFS0) | (1<<ADLAR);
    ADCSRA = (1<<ADEN) | (1<<ADIE) | (7<<ADPS0);
}

/// pin change interrupt
SIGNAL (PCINT2_vect)
{
    TCNT2 = 0; // clear timer
    if (TCCR2B==0) TCCR2B=(2<<CS21); // start timer (fosc/8)
}

/// timer interrupt
SIGNAL (TIMER2_COMPA_vect)
{
    TIMER_STOP(); // stop timer

    uint8_t mult = PIND&0x3C;
    uint8_t i;
    for (i=0;i<4;i++) if (mult==(4<<i)) break;
    if ((i<4) & (mpin==0xFF))
    {
        mpin=i;
        ADC_START(); // start ADC
    }
}

/// ADC interrupt
SIGNAL (ADC_vect)
{
    uint8_t mux = ADMUX&0x0F;
    if ((mpin<4) || (mux<6))
    {
        pinadc[mpin][mux]=ADCH;
        mux++;
        ADMUX&=0xF0;
        if (mux<6)
        {
            ADMUX|=mux;
            ADC_START();
        }
        else
        mpin=0xFF;
    }
}
