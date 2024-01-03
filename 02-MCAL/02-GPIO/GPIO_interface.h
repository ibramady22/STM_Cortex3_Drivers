/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 6 December 2023                                                                       */
/*****************************************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H



/* Port Types*/
#define GPIOA   0
#define GPIOB   1
#define GPIOC   2

/* Pin Types*/
#define PIN0     0
#define PIN1     1
#define PIN2     2
#define PIN3     3
#define PIN4     4
#define PIN5     5
#define PIN6     6
#define PIN7     7
#define PIN8     8
#define PIN9     9
#define PIN10    10
#define PIN11    11
#define PIN12    12
#define PIN13    13
#define PIN14    14
#define PIN15    15

/* Mode Types*/
#define INPUT_ANALOG                   0b0000
#define INPUT_FLOATING                 0b0100
#define INPUT_PULL_UP_DOWN             0b1000

#define OUTPUT_10MHZ_PUSH_PULL         0b0001
#define OUTPUT_10MHZ_OPEN_DRAIN        0b0101
#define OUTPUT_10MHZ_AF_PP             0b1001
#define OUTPUT_10MHZ_AF_OD             0b1101

#define OUTPUT_2MHZ_PUSH_PULL          0b0010
#define OUTPUT_2MHZ_OPEN_DRAIN         0b0110
#define OUTPUT_2MHZ_AF_PP              0b1010
#define OUTPUT_2MHZ_AF_OD              0b1110

#define OUTPUT_50MHZ_PUSH_PULL         0b0011
#define OUTPUT_50MHZ_OPEN_DRAIN        0b0111
#define OUTPUT_50MHZ_AF_PP             0b1011
#define OUTPUT_50MHZ_AF_OD             0b1111

/* Pin Value Types*/
#define GPIO_LOW     0
#define GPIO_HIGH    1

#include "STD_TYPES.h"

void GPIO_voidSetPinDirection(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Mode);
void GPIO_voidSetPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Val);
u8 GPIO_u8GetPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID);





#endif
