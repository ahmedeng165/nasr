/** @file    STD_TYPE.h
 ** @brief   Standard Types header file for this program 
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.0
 */

#ifndef STD_TYPE_H_
#define STD_TYPE_H_

#ifndef F_CPU 
#define F_CPU 1000000UL //1MHz Clock frequency
#endif

#include<avr/io.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#endif /* STD_TYPE_H_ */
