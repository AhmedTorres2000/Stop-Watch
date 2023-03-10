/**************************************************************************************/
/********************			Author: Ahmed Mohamed			***********************/
/********************			Layer: LIB			 			***********************/
/********************			Component: BIT_MATH.h			***********************/
/********************			Version: 2.00		 			***********************/
/********************			Date: 29-1-2023	 				***********************/
/**************************************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) 		 REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) 		 REG&=(~(1<<BIT))
#define TOOGLE_BIT(REG,BIT)	     REG^=(1<<BIT)
#define GET_BIT(REG,BIT) 		((REG>>BIT)&1)

#endif /* BIT_MATH_H_ */
