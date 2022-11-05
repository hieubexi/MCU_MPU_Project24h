/*
 * led_debug.c
 *
 *  Created on: Nov 5, 2022
 *      Author: hieun
 */

#include "led_debug.h"

void led_debugging(){
	switch (choice) {
		//Turn on the Led when button RESET is pressed
	case RESET_NOR :
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET) ;
			break;
		default:
			break;
	}
	if(timer2_flag >= 1){
		setTimer2(1000) ;
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin) ;
	}

}
