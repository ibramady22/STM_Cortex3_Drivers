/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 12 December 2023                                                                      */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"




void NVIC_voidEnableInterrupt(u8 Copy_u8IntNumber)
{
	// in this register 1 do change, 0 has no effect
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ISER0=1<<Copy_u8IntNumber;
	}
	else if (Copy_u8IntNumber<=59)
	{
		Copy_u8IntNumber -=32;
		NVIC_ISER1=1<<Copy_u8IntNumber;
	}
	else
	{
		/* return Error */
	}
}

void NVIC_voidDisableInterrupt(u8 Copy_u8IntNumber)
{
	// in this register 1 do change, 0 has no effect
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ICER0=1<<Copy_u8IntNumber;
	}
	else if (Copy_u8IntNumber<=59)
	{
		Copy_u8IntNumber -=32;
		NVIC_ICER1=1<<Copy_u8IntNumber;
	}
	else
	{
		/* return Error */
	}
}


void NVIC_voidSetBendingFlag(u8 Copy_u8IntNumber)
{
	// in this register 1 do change, 0 has no effect
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ISPR0=1<<Copy_u8IntNumber;
	}
	else if (Copy_u8IntNumber<=59)
	{
		Copy_u8IntNumber -=32;
		NVIC_ISPR1=1<<Copy_u8IntNumber;
	}
	else
	{
		/* return Error */
	}
}

void NVIC_voidClearBendingFlag(u8 Copy_u8IntNumber)
{
	// in this register 1 do change, 0 has no effect
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ICPR0=1<<Copy_u8IntNumber;
	}
	else if (Copy_u8IntNumber<=59)
	{
		Copy_u8IntNumber -=32;
		NVIC_ICPR1=1<<Copy_u8IntNumber;
	}
	else
	{
		/* return Error */
	}
}

u8 NVIC_u8ReadActiveFlag(u8 Copy_u8IntNumber)
{
	// in this register 1 do change, 0 has no effect
	u8 Local_u8Result;
	if(Copy_u8IntNumber<=31)
	{
		Local_u8Result=READ_BIT(NVIC_IABR0,Copy_u8IntNumber);
	}
	else if (Copy_u8IntNumber<=59)
	{
		Copy_u8IntNumber -=32;
		Local_u8Result=READ_BIT(NVIC_IABR1,Copy_u8IntNumber);
	}
	else
	{
		/* return Error */
	}
	return Local_u8Result;
}

void NVIC_voidSetPriority(s8 Copy_s8IntId, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority, u32 Copy_u32Group)
{
	u8 Local_u8Priority; // the 4 bits which determine the (Group & Sub) priority
	/* the GroupPriority will shifted by the value of              (    0 or 1 or 2 or 3 or 4       )
	 * then assign the SubPriority by | operator                                                        */
	Local_u8Priority=  Copy_u8SubPriority |(Copy_u8GroupPriority<<((Copy_u32Group-0X05FA0300)/0x100));
	/* Core Peripheral */

	/* External Peripheral */
	if(Copy_s8IntId >= 0 )
	{
		/* assign the Priority in the 4 MSB */
		NVIC_IPR[Copy_s8IntId]=Local_u8Priority<<4;
	}
	SCB_AIRCR=	Copy_u32Group;
}
