/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 3 January 2024                                                                        */
/*****************************************************************************************************/

#ifndef IR_IR_PROGRAM_C_
#define IR_IR_PROGRAM_C_

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_interface.h"
#include "STK_interface.h"
#include "EXIN_interface.h"

#include "IR_interface.h"
#include "IR_config.h"
#include "IR_private.h"

void (*IR_ActionFunc)(void);
volatile u8 u8StartFlag=0;
volatile u32 u32FrameData[50]={0};
volatile u8 u8EdgeCounter=0;
volatile u8 u8Data=0;

/* Frame Done */
void IR_voidTakeAction(void)
{
	u8 iter=0;
	u8Data=0;
	if((u32FrameData[0]>=10000) && (u32FrameData[17+iter]<=14000)) //start
	{
		for(iter=0;iter<8;iter++) //data range
			{
				if((u32FrameData[17+iter]>=2000) && (u32FrameData[17+iter]<=2300))
				{
					SET_BIT(u8Data,iter);
				}
			}
	}
	IR_ActionFunc(); /*Action from User According to Data value*/
	/*Reset all*/
	u8StartFlag=0;
	u32FrameData[0]=0;
	u8EdgeCounter=0;

}

void IR_voidGetFrame(void)
{
	if(u8StartFlag==0) //start frame
	{
		/*start timer*/
		STK_voidSetIntervalSingle(TIMER_TICKS_VALUE, IR_voidTakeAction);
		u8StartFlag=1;
	}
	else
	{
		u32FrameData[u8EdgeCounter]=STK_u32GetElapsedTime();
		STK_voidSetIntervalSingle(TIMER_TICKS_VALUE, IR_voidTakeAction);
		u8EdgeCounter++;

	}
}


void IR_voidInit(void(*ptr_func)(void ))
{
	/*don't miss figure GPIO for EXTI0 : GPIOA,Pin0 */
	/*Enable NVIC*/
	NVIC_voidSetPriority(6, 0, 0, GROUP5); //GROUP5 2priority_group 2priority_sub
	NVIC_voidEnableInterrupt(6);
	/*Enable EXTI0*/
	EXIN_voidInit();
	EXIN_VidSetCallBack(IR_voidGetFrame);
	EXIN_voidEnableEXIN(LINE0, FALLING);
	/*Start SysTick*/
	STK_voidInit(); /*AHB/8=1 MHZ*/
	IR_ActionFunc=ptr_func;
}



#endif /* 04_IR_IR_PROGRAM_C_ */
