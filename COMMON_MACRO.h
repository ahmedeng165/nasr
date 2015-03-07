/** @file    COMMON_MACROS.h
 ** @brief   COMMON_MACROS module header file for this program
 ** @author  Mohamed Tarek
 ** @date    22/1/2014
 ** @version 1.0
 */
/***MY FIRS COMMIT UING GIT HUB ***4444444/
#ifndef COMMON_MACRO_H_
#define COMMON_MACRO_H_
// Set a certain bit in any register 

#define CLEAR_BIT(REG,BIT_NUM) ( REG = REG & (~(1<<BIT_NUM)) ) //clear a certain bit in any register

#define BIT_IS_SET(REG,BIT_NUM) ( REG & (1<<BIT_NUM) ) //check if any bit is set in any register and return true if yes 

#define BIT_IS_CLEAR(REG,BIT_NUM) ( !(REG & (1<<BIT_NUM)) ) //check if any bit is clear in any register and return true if yes 
SDSADASDAS ASFASFA SDVASVFS DSASS
#endif /* COMMON_MACR]O_H_ */
