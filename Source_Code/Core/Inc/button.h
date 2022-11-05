/*
 * button.h
 *
 *  Created on: Oct 28, 2022
 *      Author: hieun
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define NUM_OF_BUTTONS 3
#define TIME_HOLD 300
#define TIME_AUTO 100
#define TIME_OUT 10000
//normal press

int is_button_Pressed(int index) ;
//long press
int is_button_long_Pressed(int index) ;

void getKeyInput();


#endif /* INC_BUTTON_H_ */
