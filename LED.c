/** @file    LED.c
 ** @brief   LED Module
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.1
 */

#include "LED.h"

/* LED Configurations Structure */
static DIO_Config   g_LED_Config;

/*********************************************************************************************/
/* Description: Called by the LED_Init function (only) used to fill the led configurations structure */
static void LED_Configurations(void)
{
	g_LED_Config.port = LED_PORT; // LED Port
	g_LED_Config.pin_num = LED_PIN_NUM; //LED PIN Number
	g_LED_Config.direction = OUTPUT; //LED is OUTPUT
	g_LED_Config.value = LED_OFF; //initial value
}
/*********************************************************************************************/
 void LED_Init(void)
{
	LED_Configurations(); // fill the g_LED_Config structure with the led configurations
	DIO_Set_Direction(& g_LED_Config); // set the direction of the LED 
	DIO_Write_Pin(& g_LED_Config); // set the Default value (initial value)
}
/*********************************************************************************************/
void LED_Set_ON(void)
{
	g_LED_Config.value = LED_ON;
	DIO_Write_Pin(& g_LED_Config); 
}
/*********************************************************************************************/
void LED_Set_OFF(void)
{
	g_LED_Config.value = LED_OFF;
	DIO_Write_Pin(& g_LED_Config);
}
/*********************************************************************************************/
void LED_Refresh_Output(void)
{
	DIO_Write_Pin(& g_LED_Config);
}
/*********************************************************************************************/
void LED_Toggle(void)
{
	if(g_LED_Config.value == LED_OFF)
	{
		LED_Set_ON();
	}
	else
	{
		LED_Set_OFF();
	}
}
/*********************************************************************************************/