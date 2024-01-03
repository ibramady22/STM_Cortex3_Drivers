/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 December 2023                                                                      */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

void (*STK_CALLBACK)(void);
static u8 single_interval=0; //Flag to single interval


void STK_voidInit(void)
{
	/* choose Clock  AHB/8*/
	WRITE_BIT( STK ->CTRL,2,AHB_8);
	/*Disable STK Interrupt*/
	CLR_BIT(STK ->CTRL,1);
	/*Disable STK */
	CLR_BIT(STK ->CTRL,0);
}

void STK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	/*Assign Load Reg*/
	STK->LOAD=Copy_u32Ticks;
	/*Enable STK */
	SET_BIT(STK ->CTRL,0);
	/*busy Wait on flag*/
	while( READ_BIT(STK ->CTRL,16)==0);
	STK->LOAD=0;
	STK->VAL=0;
}


void STK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*ptr)(void) )
{
	/*Disable timer*/
	CLR_BIT(STK ->CTRL,0);
	STK->VAL=0;
	/*Assign Load Reg*/
	STK->LOAD=Copy_u32Ticks;
	/*Enable STK */
	SET_BIT(STK ->CTRL,0);
	single_interval=1; //flag to single interval
	STK_CALLBACK=ptr;  // assign the callback
}

void STK_voidSetIntervalPeriodic(u32 Copy_u32Ticks, void (*ptr)(void) )
{

	/*Assign Load Reg*/
	STK->LOAD=Copy_u32Ticks;
	/*Enable STK */
	SET_BIT(STK ->CTRL,0);
	single_interval=0; //flag to single interval
	STK_CALLBACK=ptr;  // assign the callback
}

void STK_voidStopTimer(void)
{
	/*Assign Load Reg to zero*/
	STK->LOAD=0;
	/*Assign Value Reg to zero*/
	STK->VAL=0;
	/*Disable STK */
	CLR_BIT(STK ->CTRL,0);
}

u32 STK_u32GetElapsedTime(void)
{
	/*return time*/
	return ((STK->LOAD)-(STK->VAL));
}
u32 STK_u32GetRemaningTime(void)
{
	return STK->VAL;
}


/* STK Handler*/
void SysTick_Handler(void)
{
	if(single_interval==1)
	{
		single_interval=0;
		STK->LOAD=0;
		STK->VAL=0;
	}
	STK_CALLBACK();
}

