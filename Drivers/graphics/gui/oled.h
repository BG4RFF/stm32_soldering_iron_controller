/*
 * oled.h
 *
 *  Created on: Aug 1, 2017
 *      Author: jose
 */

#ifndef GRAPHICS_GUI_OLED_H_
#define GRAPHICS_GUI_OLED_H_

#include "../generalIO/rotary_encoder.h"
#include "screen.h"

screen_t *oled_addScreen(uint8_t index);
void oled_draw(void);
void oled_init(void);
void oled_processInput(RE_Rotation_t input, RE_State_t *);
void oled_update(void);

#endif /* GRAPHICS_GUI_OLED_H_ */
