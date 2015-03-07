/** @file    BUTTON.c
 ** @brief   Button Module for this program 
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.1
 */

#include "BUTTON.h"

/* Button Configurations Structure */
static DIO_Config g_Button_Config;

/* Count the number of Pressed times increment if the switch pressed for 20 ms */
static uint8 g_Pressed_Count  = 0;

/* Count the number of Released times increment if the switch released for 20 ms */
static uint8 g_Released_Count = 0;

/*******************************************************************************************************************/
/* Description: Called by the Button_Init function (only) used to fill the Button configurations structure */
static void BUTTON_Configurations()
{
	g_Button_Config.port      = BUTTON_PORT; //Button PORT
	g_Button_Config.pin_num   = BUTTON_PIN_NUM; //Button PIN Number
	g_Button_Config.direction = INPUT; //Button is INPUT
	g_Button_Config.value     = RELEASED;
}
/*******************************************************************************************************************/
void BUTTON_Init()
{
	BUTTON_Configurations();
	DIO_Set_Direction(& g_Button_Config);
}
/*******************************************************************************************************************/
uint8 BUTTON_Get_State(void)
{
		return g_Button_Config.value;
}
/*******************************************************************************************************************/
void BUTTON_Refresh_State(void)
{
		uint8 state = DIO_Read_Pin(& g_Button_Config);
		if(state == PRESSED)
		{
			g_Pressed_Count++;
			g_Released_Count = 0;
		}
		else
		{
			g_Released_Count++;
			g_Pressed_Count = 0;
		}
		
		if(g_Pressed_Count == 3)
		{
			g_Button_Config.value = PRESSED;
			g_Pressed_Count       = 0;
			g_Released_Count      = 0;
		}
		else if(g_Released_Count == 3)
		{
			g_Button_Config.value = RELEASED;
			g_Released_Count      = 0;
			g_Pressed_Count       = 0;
		}						  			  			   
}
/*******************************************************************************************************************/