/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 9 December 2023                                                                       */
/*****************************************************************************************************/

#ifndef LED_LED_INTERFACE_H_
#define LED_LED_INTERFACE_H_

/* LED_Name*/
#define LED_1   1
#define LED_2   2
#define LED_3   3
#define LED_4   4
#define LED_5   5
#define LED_6   6

void LED_voidOn( u8 Copy_u8LedNum);
void LED_voidOff(u8 Copy_u8LedNum);
void LED_voidToggle(u8 Copy_u8LedNum);


#endif  /* LED_LED_INTERFACE_H_ */
