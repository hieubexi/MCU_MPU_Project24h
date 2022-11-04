/*
 * fsm_manual_run.c
 *
 *  Created on: Oct 7, 2022
 *      Author: hieun
 */


#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status) {
		case MAN_RED:
			//TODO
			if(timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(red);
			}
			break;
		case MAN_GREEN:
			break;
		case MAN_YELLOW:
			break;
		default:
			break;
	}
}
