/** display input module */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>

#include "disp.h"

/** display - bottom look (at the pins):

        |- top ----------------------------|
        |                                  |
        |   d01  d02  d03  d04  d05  d06   |
        |                                  |
        |   d07  d08  d09  d10  d11  d12   |
        |                                  |
        |----------------------------------|

    multiplex:  PD2 ... d06
                PD3 ... d02
                PD4 ... d07
                PD5 ... d03

    bus:        PC0 (ADC0) ... d12
                PC1 (ADC1) ... d08
                PC2 (ADC2) ... d04
                PC3 (ADC3) ... d01
                PC4 (ADC4) ... d05
                PC5 (ADC5) ... d09

    bus unconnected (point and bottom segment): d11, d10   */

/** how it should work
    1) pin change interrupt on multiplex pins
    2) start timer
    3) after timer timeout 100us (output capture interrupt) start ADC
    4) read all 6 ADCs using 8bit value
    x) wait pin change interrupt */

#define ADC_START() ADCSRA|=(1<<ADSC)
#define TIMER_START() TCCR2B=(2<<CS21)
#define TIMER_STOP() TCCR2B=0

#define DISP_ADC_TRASHOLD 0x80

uint8_t mpin = 0xFF;
uint8_t pinadc[4][6];
uint8_t pindisp[4];
uint16_t disp_value = 0;

int8_t disp2int(uint8_t disp)
{
    switch (disp)
    {
        case 0x3D: return 0; break;
        case 0x28: return 1; break;
        case 0x1B: return 2; break;
        case 0x3A: return 3; break;
        case 0x2E: return 4; break;
        case 0x36: return 5; break;
        case 0x37: return 6; break;
        case 0x38: return 7; break;
        case 0x3F: return 8; break;
        case 0x3E: return 9; break;
        default: return -1; break;
    }
}

/// get disp value
void get_disp_value(void)
{
    int8_t value[4];
    uint8_t i;
    value[0]=disp2int(pindisp[0]&0x28);
    for (i=1;i<4;i++) value[i]=disp2int(pindisp[i]);
    if ((value[1]!=-1) && (value[2]!=-1) && (value[3]!=-1))
    {
        if (value[0]==-1) value[0]=0;
        disp_value = ((uint16_t)value[0]*1000) + ((uint16_t)value[3]*100) + ((uint16_t)value[1]*10) + ((uint16_t)value[2]);
    }
}

/// initialization
void init_disp(void)
{
    // clear array
    memset(pinadc,0,sizeof(uint8_t)*6*4);
    memset(pindisp,0,sizeof(uint8_t)*4);
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
        uint8_t adc_value = ADCH;
        pinadc[mpin][mux]=adc_value;
        if (adc_value<DISP_ADC_TRASHOLD) pindisp[mpin] |=  (1<<mux);
        else                             pindisp[mpin] &= ~(1<<mux);
        mux++;
        ADMUX&=0xF0;
        if (mux<6)
        {
            ADMUX|=mux;
            ADC_START();
        }
        else
        {
            mpin=0xFF;
            get_disp_value();
        }
    }
}
