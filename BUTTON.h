/** @file    BUTTON.h
 ** @brief   Button module header file for this program 
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.1
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "DIO.h"

/* Button State according to its configuration PULL UP/Down */
#define PRESSED  LOGIC_HIGH
#define RELEASED LOGIC_LOW

/* Set the Button Port */
#define BUTTON_PORT 'D'

/* Set the Button Pin Number */
#define BUTTON_PIN_NUM 2

/* 
 * Description: 1. fill the button configurations structure 
 *              2. set the PIN direction which the button is connected to INPUT
 */
void BUTTON_Init();

/* Description: Read the Button state Pressed/NOT Pressed */
uint8 BUTTON_Get_State(void);

/* 
 * Description: This function is called every 20ms by Scheduler and it responsible for Updating 
 *              the BUTTON State. it should be in a PRESSED State if the button
 *				is pressed for 60ms. and it should be in a RELEASED State if the
 *				button is released for 60ms.
 */   
void BUTTON_Refresh_State(void);

#endif /* BUTTON_H_ */
