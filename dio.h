#ifndef dio_h 
#define dio_h

#include"mcal_config.h"
#include"common_macros.h"
/**define**
#define INPUT 0
#define OUTPUT 1
#define LOGICHIGH 1
#define LOGICLOW 0

/**struct **/
typedef struct 
{
uint8 port ;
uint8 direction;
uint8 num;
uint8 value;
}DioConfig;


/*function prototypes */ 

void DIO_setDirection(const DioConfig * s_configMsg);
void DIO_write(const Dioconfig * s_configMsg);
uint8 DIO_read(const Dioconfig * s_configMsg);
void_DIO_setPortDirec(const DioConfig *s_configMsg[],uint8 a_pinNum );
void DIO_writePort(const DioConfig *s_configMsg[],uint8 a_pinNum);

#endif