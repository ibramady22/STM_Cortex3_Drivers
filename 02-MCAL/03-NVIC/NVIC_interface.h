/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 12 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef NVIC_NVIC_INTERFACE_H_
#define NVIC_NVIC_INTERFACE_H_

 /* the (Group & SubGroup) Priorities Types */
#define GROUP3  0X05FA0300 // 4 bits for group priority (IPR)
#define GROUP4  0X05FA0400 // 3 bits for group & 1 bit for Sub_group
#define GROUP5  0X05FA0500 // 2 bits for group & 2 bit for Sub_group
#define GROUP6  0X05FA0600 // 1 bits for group & 3 bit for Sub_group
#define GROUP7  0X05FA0700 // 0 group & 4 bit for Sub_group



void NVIC_voidEnableInterrupt    (u8 Copy_u8IntNumber);
void NVIC_voidDisableInterrupt   (u8 Copy_u8IntNumber);
void NVIC_voidSetBendingFlag     (u8 Copy_u8IntNumber);
void NVIC_voidClearBendingFlag   (u8 Copy_u8IntNumber);
u8 NVIC_u8ReadActiveFlag         (u8 Copy_u8IntNumber);
void NVIC_voidSetPriority(s8 Copy_s8IntId, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority, u32 Copy_u32Group);

//void NVIC_voidSetPriority(s8 Copy_s8IntId, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority, u32 Copy_u32Group);


#endif /* 3_NVIC_NVIC_INTERFACE_H_ */
