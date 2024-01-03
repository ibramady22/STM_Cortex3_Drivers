/*****************************************************************************************************/
/* Author   : IBRAHIM MADY                                                                           */
/* Version  : V01                                                                                    */
/* Date     : 1 December 2023                                                                        */
/*****************************************************************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(REG,BIT)                          REG |=  (1 <<BIT)
#define CLR_BIT(REG,BIT)                          REG &= ~(1 <<BIT)
#define READ_BIT(REG,BIT)                         (( REG >>BIT) & 1) 
#define WRITE_BIT(REG,BIT,VAL)                    REG = ((REG & (~(1<<BIT))) |(VAL <<BIT))
#define TOGGLE_BIT(REG,BIT)                       REG^ = (1 <<BIT) 
  









#endif
