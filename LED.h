/** @file    LED.h
 ** @brief   LED module header file for this program
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.1
 */


#ifndef LED_H_
#define LED_H_

#include "DIO.h"

/* Set the led ON/OFF according to its configuration Positive logic or negative logic */
#define LED_ON  LOGIC_HIGH
#define LED_OFF LOGIC_LOW

/* Set the LED Port */
#define LED_PORT 'C'

/* Set the LED Pin Number */
#define LED_PIN_NUM 2

/* Description: 1. fill the led configurations structure 
 *              2. set the PIN direction which the led is connected to OUTPUT
 *				3. Initialize the led ON/OFF according to the initial value 
 */
void LED_Init(void);

/* Description: Set the LED state to ON */
void LED_Set_ON(void);

/* Description: Set the LED state to OFF */
void LED_Set_OFF(void);

/*Description: Toggle the LED state */
void LED_Toggle(void);

/* Description: Refresh the LED state */
void LED_Refresh_Output(void);

#endif /* LED_H_ */
