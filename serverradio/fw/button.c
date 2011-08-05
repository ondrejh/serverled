/** button driver module */
/** buttons:    PD6 ... |<<
                PD7 ... CH
                PB0 ... >>| */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <stdbool.h>

#include "button.h"

#define MAX_BTN_PRESS_TIME 500
uint16_t btn_timer = 0;

uint8_t presb = 0;

/// button down (if btn not exist return -1 else return 0)
int8_t btn_down(uint8_t btn)
{
    switch (btn)
    {
        case 0:
            DDRD |= 0x40;
            PORTD &= ~0x40;
            return 0;
            break;
        case 1:
            DDRD |= 0x80;
            PORTD &= ~0x80;
            return 0;
            break;
        case 2:
            DDRB |= 0x01;
            PORTB &= ~0x01;
            return 0;
            break;
        default:
            return -1;
            break;
    }
}

/// button up (if btn not exist return -1 else return 0)
int8_t btn_up(uint8_t btn)
{
    switch (btn)
    {
        case 0:
            DDRD &= ~0x40;
            return 0;
            break;
        case 1:
            DDRD &= ~0x80;
            return 0;
            break;
        case 2:
            DDRB &= ~0x01;
            return 0;
            break;
        default:
            return -1;
            break;
    }
}

/*/// press button loop function
void press_button_wait(uint8_t btn)
{
    while (press_button(btn)!=0) {};
}

 press button function
    press and hold defined button for constant time */
/*int8_t press_button(uint8_t btn)
{
    static uint8_t btn_pressed = 0;
    static bool on_waiting = false;

    if (on_waiting)
    {
        if (btn_timer==0) // wait timer
        {
            on_waiting = false;
            btn_up(btn_pressed);
            return 0; // indicate done
        }
    }
    else
    {
        if (btn_down(btn)==0)
        {
            btn_pressed = btn;
            btn_timer = BTN_PRESS_TIME;
            on_waiting = true;
        }
        else return 0; // button couldnt be pressed
    }

    if (btn==btn_pressed) return 1; // indicate waiting
    return -1; // error value
}*/

/// init button timer
void init_timer(void)
{
    // init timer
    TCCR0A = (2<<WGM00); // CTC
    OCR0A = 71; // 7.3728MHz / 1024 / 72 = 100Hz
    TIMSK0 = (1<<OCIE0A); // compare match interrupt
    TCCR0B = (5<<CS00); // fosc/1024
}

/// timer interrupt
SIGNAL (TIMER0_COMPA_vect)
{
    if (presb==0) btn_timer=MAX_BTN_PRESS_TIME;
    if (btn_timer)
    {
        btn_timer--;
        if (btn_timer==0)
        {
            btn_up(0);
            btn_up(1);
            btn_up(2);
            presb=0;
        }
    }
}
