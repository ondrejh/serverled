/** display input module header */

#ifndef _DISP_H
#define _DISP_H

uint8_t pinadc[4][6];
uint8_t pindisp[4];
uint16_t disp_value;

/// initialization
void init_disp(void);

#endif
