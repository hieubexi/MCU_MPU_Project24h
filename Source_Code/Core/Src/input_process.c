/*
 * input_process.c
 *
 *  Created on: Nov 5, 2022
 *      Author: hieun
 */
#include "input_process.h"


void fsm_simple_buttons_run(){
	switch (choice) {
		case INIT:

			if( is_button_Pressed(No_RESET - 1) ) choice = RESET_NOR ;
		    if( is_button_Pressed(No_INC - 1 ) ) choice = INC_NOR ;
			if( is_button_Pressed(No_DEC - 1) ) choice = DEC_NOR ;

			if(timer1_flag >= 1){
				setTimer1(1000);
				if(counter > 0)	counter--;
			}
			break;
		case RESET_NOR:

			counter = 0 ;

			is_button_long_Pressed(No_INC - 1);
			is_button_long_Pressed(No_DEC - 1);
			if( is_button_Pressed(No_INC - 1) ) choice = INC_NOR ;
			if( is_button_Pressed(No_DEC - 1) ) choice = DEC_NOR ;
			else {
				choice = INIT ;
				setTimer1(TIME_OUT);
			}
			break;
		case INC_NOR:

			counter++;
			if(counter >= 10) counter = 0 ;

			if( is_button_Pressed(No_RESET - 1) ) choice = RESET_NOR ;
			if( is_button_Pressed(No_DEC - 1 ) ) choice = DEC_NOR ;

			else {
				choice = INIT ;
				setTimer1(TIME_OUT);
			}
			break;
		case DEC_NOR:
			counter--;
			if(counter < 0 ) counter = 9;
			if( is_button_Pressed(No_RESET - 1) ) choice = RESET_NOR ;
			if( is_button_Pressed( No_INC - 1 ) ) choice = INC_NOR ;
			else{
				choice = INIT ;
				setTimer1(TIME_OUT);
			}
			break;
		case INC_LONG:
			if(!is_button_Pressed(No_INC - 1)) {
				is_button_long_Pressed(No_INC - 1);
				choice = INIT;
				setTimer1(TIME_OUT) ;
			}
			if(timer1_flag >= 1){
				setTimer1(1000) ;
				counter++;
				if(counter >= 10) counter = 0 ;
			}
			break;
		case DEC_LONG:
			if(!is_button_Pressed(No_DEC - 1)) {

				choice = INIT;
				setTimer1(TIME_OUT) ;
			}
			if(timer1_flag >= 1){
				setTimer1(1000) ;
				counter--;
				if(counter < 0) counter = 9 ;
			}
			break;
		default:
			break;
	}
}
