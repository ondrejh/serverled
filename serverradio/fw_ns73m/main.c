/*
 */

#include <avr/io.h>

#include "i2cmaster.h"

#define DEV_NS73M 0xCC
#define ADR_NS73M 0x02



uint8_t ns73m_write_reg(uint8_t reg_address, uint8_t reg_value)
{
    uint8_t ret;

    // start transmition & send address
    ret = i2c_start(DEV_NS73M | ADR_NS73M | I2C_WRITE);
    if (ret) {
        i2c_stop(); // stop i2c operation
        return -1; } // device not accesible (no ack)

    i2c_write(reg_address); // send reg_address
    i2c_write(reg_value); // send reg_value
    i2c_stop(); // transmition end

    return 0; // OK
}

int main(void)
{

    // Initialization phase
    i2c_init();

    while(1)
    ;

    return 0;
}
