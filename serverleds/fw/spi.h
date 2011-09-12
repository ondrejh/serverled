/** spi module header */

#ifndef _SPI_H
#define _SPI_H

#define TOBAL(x) (~(((x>>2)&0x01)|((x<<1)&0x02)|((x>>1)&0x04)|((x<<2)&0x08)))
#define FROMBAL(x) (((((~x)>>1)&0x01)|(((~x)>>2)&0x02)|(((~x)<<2)&0x04)|(((~x)<<1)&0x08))&0x0F)

#define SPI_DATALEN 4
uint8_t spi_data[SPI_DATALEN];

#define LEDS 16
uint8_t leds_green_val[LEDS];
uint8_t leds_red_val[LEDS];

/// spi initialization
void init_spi(void);

#endif
