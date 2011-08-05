/** button driver module header */

#ifndef _BUTTON_H
#define _BUTTON_H

uint8_t presb;

int8_t btn_down(uint8_t btn);
int8_t btn_up(uint8_t btn);

/*/// press button loop function
void press_button_wait(uint8_t btn);

/// press button function
int8_t press_button(uint8_t btn);*/

/// init button timer
void init_timer(void);

#endif
