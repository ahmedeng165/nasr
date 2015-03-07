#include"dio.h" 


void DIO_setDirection(const DioConfig * s_configMsg)
	{
	uint8 * dd_ptr ;
	switch(s_configMsg->port)
	{
	case 'A' :
	dd_ptr=&DDRA;
	break;		
	case 'B' :
	dd_ptr=&DDRB;
	break;
	case 'C' :
	dd_ptr=&DDRC;
	break;
	case 'D' :
	dd_ptr=&DDRD;
	break;
	}
	if(s_configMsg->direction==INPUT)
	{
	CLEAR_BIT(*dd_ptr,s_configMsg->PinNum);
	
	}
	else{	
	SET_BIT(*dd_ptr,s_configMsg->PinNum);
	}

	}
void DIO_write(const Dioconfig * s_configMsg)
	{
	uint8 * dd_ptr ;
	switch(s_configMsg->port)
	{
	case 'A' :
	dd_ptr=&PORTA;
	break;		
	case 'B' :
	dd_ptr=&PORTB;
	break;
	case 'C' :
	dd_ptr=&PORTC;
	break;
	case 'D' :
	dd_ptr=&PORTD;
	break;
	}
	if(s_configMsg->value==LOGICHIGH)
	{
	SET_BIT(*dd_ptr,s_configMsg->PinNum);
	}
	else
	{
	CLEAR_BIT(*dd_ptr,s_configMsg->PinNum);
	}

	}	
uint8 DIO_read(const Dioconfig * s_configMsg)
	{
		
	uint8 * dd_ptr ;
	uint8 output ;
	switch(s_configMsg->port)
	{
	case 'A' :
	dd_ptr=&PINA;
	break;		
	case 'B' :
	dd_ptr=&PINB;
	break;
	case 'C' :
	dd_ptr=&PINC;
	break;
	case 'D' :
	dd_ptr=&PIND;
	break;
	}
	if(IS_BIT_SET(*dd_ptr,s_configMsg->pinNum))
	{
	output=LOGICHIGH;
	}
	else if(IS_BIT_CLEAR(*dd_ptr,s_configMsg->pinNum))
	{
	output=LOGILOW;
	}

	return output ;
	}
	void_DIO_setPortDirec(const DioConfig *s_configMsg[],uint8 a_pinNum,uint8 a_startPin )
	{ 
		uint8 i; /*itirations*/
		for(i=a_startPin;i<a_pinNum;i++)
		{
			void DIO_setDirection(s_configMsg[i])
		}
		
		}
		
	
	void DIO_writePort(const DioConfig *s_configMsg[],uint8 a_pinNum,uint8 a_startPin)
	{
	uint8 i; /*itirations*/
	for(i=a_startPin;i<a_pinNum;i++)
	{
		void DIO_write(s_configMsg[i])
	}
	
}
	