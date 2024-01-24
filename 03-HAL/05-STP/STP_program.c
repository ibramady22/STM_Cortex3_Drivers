/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 12 January 2024                                                                       */
/*****************************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"
#include "GPIO_interface.h"

#include "STP_interface.h"
#include "STP_config.h"
#include "STP_private.h"

void STP_voidSendDataSynchronous(u8 Copy_u8Data)
{
	s8 Local_s8Counter;
	u8 Local_u8Bit;
	/* Start Sending Data from MSB */
	for(Local_s8Counter=7;Local_s8Counter>=0;Local_s8Counter--)
	{
		Local_u8Bit=READ_BIT(Copy_u8Data,Local_s8Counter);
		GPIO_voidSetPinDirection(STP_SERIAL_DATA, Local_u8Bit);
		/* Pulse on Shifting Clock*/
		GPIO_voidSetPinDirection(STP_SHIFT_CLK, GPIO_LOW);
		STK_voidSetBusyWait(1); /* 1 microsecond */
		GPIO_voidSetPinDirection(STP_SHIFT_CLK, GPIO_HIGH);
		STK_voidSetBusyWait(1); /* 1 microsecond */
	}
	/* pulse on Storage Clock*/
	GPIO_voidSetPinDirection(STP_STARAGE_CLK, GPIO_LOW);
	STK_voidSetBusyWait(1); /* 1 microsecond */
	GPIO_voidSetPinDirection(STP_STARAGE_CLK, GPIO_HIGH);
	STK_voidSetBusyWait(1); /* 1 microsecond */
}



