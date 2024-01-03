/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef STK_STK_INTERFACE_H_
#define STK_STK_INTERFACE_H_





/*STK_Clock options */
#define AHB     1
#define AHB_8   0



/* Apply clock choice from configuration file
 * Disable SysTick Interrupt
 * Disable SysTick                           */
void STK_voidInit(void);

void STK_voidSetBusyWait(u32 Copy_u32Ticks);

void STK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*ptr)(void) );
void STK_voidSetIntervalPeriodic(u32 Copy_u32Ticks, void (*ptr)(void) );
void STK_voidStopTimer(void);
u32 STK_u32GetElapsedTime(void);
u32 STK_u32GetRemaningTime(void);


#endif /* 06_STK_STK_INTERFACE_H_ */
