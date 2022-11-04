/*
 * display7SEG.h
 *
 *  Created on: Oct 4, 2022
 *      Author: hieun
 */
#include "main.h"
#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#define SEG0 SEG0_GPIO_Port
#define SEG1 SEG1_GPIO_Port
#define SEG2 SEG2_GPIO_Port
#define SEG3 SEG3_GPIO_Port
#define SEG4 SEG4_GPIO_Port
#define SEG5 SEG5_GPIO_Port
#define SEG6 SEG6_GPIO_Port

#define P_SEG0  SEG0_Pin
#define P_SEG1  SEG1_Pin
#define P_SEG2  SEG2_Pin
#define P_SEG3  SEG3_Pin
#define P_SEG4  SEG4_Pin
#define P_SEG5  SEG5_Pin
#define P_SEG6  SEG6_Pin


extern int num;
void display7SEG(int num);


#endif /* INC_DISPLAY7SEG_H_ */
