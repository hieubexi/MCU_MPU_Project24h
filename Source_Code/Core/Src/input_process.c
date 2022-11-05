/*
 * input_process.c
 *
 *  Created on: Nov 5, 2022
 *      Author: hieun
 */
#include "input_process.h"


void fsm_first_task(){
	// "choice" is state variable
	// No_RESET is RESET button's number
	// No_INC is INC button's number
	// No_DEC is DEC button's number
	switch (choice) {
		//do nothing
			case INIT:
				if(is_button_Pressed(No_RESET - 1)) choice = RESET_NOR ;
			    if(is_button_Pressed(No_INC - 1 )) choice = INC_NOR ;
				if(is_button_Pressed(No_DEC - 1)) choice = DEC_NOR ;
				break;
			// RESET button is normal pressed
			case RESET_NOR:
				counter = 0 ;
				if(is_button_Pressed(No_INC - 1)) choice = INC_NOR ;
				if(is_button_Pressed(No_DEC - 1)) choice = DEC_NOR ;
				else {
					choice = INIT ;
				}
				break;
			// INC button is normal pressed
			case INC_NOR:
				counter++;
				if(counter >= 10) counter = 0 ;

				if(is_button_Pressed(No_RESET - 1)) choice = RESET_NOR ;
				if(is_button_Pressed(No_DEC - 1 )) choice = DEC_NOR ;

				else {
					choice = INIT ;
				}
				break;
				// DEC button is normal pressed
				case DEC_NOR:
					counter--;
					if(counter < 0 ) counter = 9;
					if(is_button_Pressed(No_RESET - 1) ) choice = RESET_NOR ;
					if(is_button_Pressed( No_INC - 1 ) ) choice = INC_NOR ;
					else{
						choice = INIT ;
					}
					break;
			default:
				break;
	}
}
void fsm_second_task(){
	fsm_first_task();
	// INC button is pressed than 3s
	switch(choice){
	// INC button is pressed than 3s
	case INC_LONG:
		if(!is_button_Pressed(No_INC - 1)) {
			choice = INIT;
		}
		break;
	// DEC button is pressed than 3s
	case DEC_LONG:
		if(!is_button_Pressed(No_DEC - 1)) {
			choice = INIT;
		}
		break;
	default:
		break;
}
}
void fsm_simple_buttons_run(){
	switch (choice) {
	//do nothing
		case INIT:
			if(is_button_Pressed(No_RESET - 1)) choice = RESET_NOR ;
		    if(is_button_Pressed(No_INC - 1 )) choice = INC_NOR ;
			if(is_button_Pressed(No_DEC - 1)) choice = DEC_NOR ;
			if(timer1_flag >= 1){
				setTimer1(1000);
				if(counter > 0)	counter--;
			}


			break;
		// RESET button is normal pressed
		case RESET_NOR:
			counter = 0 ;

			if(is_button_Pressed(No_INC - 1)) choice = INC_NOR ;
			if(is_button_Pressed(No_DEC - 1)) choice = DEC_NOR ;
			else {
				choice = INIT ;
				setTimer1(TIME_OUT);
				setTimer2(1000);
			}
			break;
		// INC button is normal pressed
		case INC_NOR:
			counter++;
			if(counter >= 10) counter = 0 ;
			if(is_button_Pressed(No_RESET - 1)) choice = RESET_NOR ;
			if(is_button_Pressed(No_DEC - 1 )) choice = DEC_NOR ;
			if(is_button_pressed_3s(No_INC - 1)) {
					setTimer1(1000) ;
					choice = DEC_LONG;
			}
			else {
				choice = INIT ;
				setTimer1(TIME_OUT);
				setTimer2(1000);
			}
			break;
		// DEC button is normal pressed
		case DEC_NOR:
			counter--;
			if(counter < 0 ) counter = 9;
			if(is_button_Pressed(No_RESET - 1) ) choice = RESET_NOR ;
			if(is_button_Pressed( No_INC - 1 ) ) choice = INC_NOR ;
			if(is_button_pressed_3s(No_DEC - 1)) {
				setTimer1(1000) ;
				choice = DEC_LONG;
			}
			else{
				choice = INIT ;
				setTimer1(TIME_OUT);
				setTimer2(1000);
			}
			break;
		// INC button is pressed than 3s
		case INC_LONG:
			if(!is_button_Pressed(No_INC - 1)) {
				choice = INIT;
				setTimer1(TIME_OUT) ;
				setTimer2(1000);
			}
			break;
		// DEC button is pressed than 3s
		case DEC_LONG:
			if(!is_button_Pressed(No_DEC - 1)) {
				choice = INIT;
				setTimer1(TIME_OUT) ;
				setTimer2(1000);
			}
			break;
		default:
			break;
	}

}
