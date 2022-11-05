/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: hieun
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "display7SEG.h"
#include "software_timer.h"
#define INIT 		0

#define No_RESET 	1
#define No_INC	 	2
#define No_DEC	 	3

#define	RESET_LONG	11
#define INC_LONG	12
#define DEC_LONG	13

#define RESET_NOR 	21
#define INC_NOR		22
#define	DEC_NOR		23


extern int status;
extern int counter;
extern int choice;


#endif /* INC_GLOBAL_H_ */
