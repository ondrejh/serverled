/** spi module */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

#include "spi.h"

#define RCK_ON()  PORTB|=0x04
#define RCK_OFF() PORTB&=~0x04

uint8_t spi_data[SPI_DATALEN] = {0x00,0x00,0x00,0x00};
uint8_t spi_ptr = 0;

#define LEDS 16
uint8_t leds_green_val[LEDS] = {0x00,0x00,0x00,0x00,
                                0x00,0x00,0x00,0x00,
                                0x00,0x00,0x00,0x00,
                                0x00,0x00,0x00,0x00};
uint8_t leds_red_val[LEDS] = {0x00,0x00,0x00,0x00,
                              0x00,0x00,0x00,0x00,
                              0x00,0x00,0x00,0x00,
                              0x00,0x00,0x00,0x00};
uint8_t ledsgrn_mirr[LEDS]; // green leds pwm array mirror
uint8_t ledsred_mirr[LEDS]; // red leds pwm array mirror (copied at the pwm cycle startup)

/// set led pwm
int8_t set_led_pwm(uint8_t pos, uint8_t green_pwm, uint8_t red_pwm)
{
    if (pos>15) return -1;
    leds_green_val[pos]=green_pwm;
    leds_red_val[pos]=red_pwm;
    return 0;
}

/// all leds off
int8_t all_leds_off(void)
{
    uint8_t i;
    for (i=0;i<16;i++) set_led_pwm(i,0,0);
    return 0;
}

/// spi initialization
void init_spi(void)
{
    // init spi data
    memset(spi_data,0,SPI_DATALEN);

    // RCK, MOSI, SCK output (PB2,PB3,PB5)
    // init spi nibbles
    PORTB &= ~((1<<PIN2)|(1<<PIN3)|(1<<PIN5));
    DDRB |= (1<<PIN2)|(1<<PIN3)|(1<<PIN5);

    // interrupt enable, enable, MSB first, master, fosc/2
    SPCR = (1<<SPIE) | (1<<SPE) | (1<<MSTR) | (3<<SPR0);
    // start first transmition
    SPDR = spi_data[spi_ptr++];
}

/// spi data transmitt complete interrupt
SIGNAL (SPI_STC_vect)
{
    static uint8_t pwm_cnt;
    // test if it was all
    if (spi_ptr>=SPI_DATALEN)
    {
        // pulse on RCK and reset counter
        RCK_ON();
        spi_ptr=0;
        RCK_OFF();

        // pwm cycle start
        if (pwm_cnt==0)
        {
            //memset(spi_data,0xAA,SPI_DATALEN);
            memcpy(ledsgrn_mirr,leds_green_val,LEDS);
            memcpy(ledsred_mirr,leds_red_val,LEDS);
        }

        // compute next spi value
        uint8_t i;
        for (i=0;i<LEDS;i++)
        {
            uint8_t shift=6-((i%4)*2);
            uint8_t pos=i/4;
            if (pwm_cnt>=ledsgrn_mirr[i]) spi_data[pos]&=~(0x02<<shift); else spi_data[pos]|=0x02<<shift;
            if (pwm_cnt<=((~ledsred_mirr[i])&0x0F)) spi_data[pos]&=~(0x01<<shift); else spi_data[pos]|=0x01<<shift;
        }

        // increase pwm counter
        pwm_cnt++;
        pwm_cnt&=0x0F;
    }
    // transmitt next
    SPDR = spi_data[spi_ptr++];
}
