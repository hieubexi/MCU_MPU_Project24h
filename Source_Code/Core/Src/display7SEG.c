/*
 * display7SEG.c
 *
 *  Created on: Oct 4, 2022
 *      Author: hieun
 */
#include "display7SEG.h"

void display7SEG(int num){
//	if(num >= 10) num = 0 ;
	if(num == 0){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, RESET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, SET);
	}else if(num == 1){
		HAL_GPIO_WritePin(SEG0, P_SEG0, SET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, SET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, SET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, SET);
	}else if(num == 2){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, SET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, RESET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, SET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else if(num == 3){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, SET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else if( num == 4){
		HAL_GPIO_WritePin(SEG0, P_SEG0, SET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, SET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else if(num == 5){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, SET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else if(num == 6){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, SET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, RESET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else if(num == 7){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, SET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, SET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, SET);
	}else if (num == 8 ){
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, RESET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}else{
		HAL_GPIO_WritePin(SEG0, P_SEG0, RESET);
		HAL_GPIO_WritePin(SEG1, P_SEG1, RESET);
		HAL_GPIO_WritePin(SEG2, P_SEG2, RESET);
		HAL_GPIO_WritePin(SEG3, P_SEG3, RESET);
		HAL_GPIO_WritePin(SEG4, P_SEG4, SET);
		HAL_GPIO_WritePin(SEG5, P_SEG5, RESET);
		HAL_GPIO_WritePin(SEG6, P_SEG6, RESET);
	}
}
