/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 1 December 2023                                                                       */
/*****************************************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H


#define RCC_AHB       0 
#define RCC_APB1      1 
#define RCC_APB2      2


void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_InitSysClock(void);


#endif
