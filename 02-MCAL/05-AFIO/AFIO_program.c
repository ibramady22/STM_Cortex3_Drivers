/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 17 December 2023                                                                      */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "AFIO_interface.h"
#include "AFIO_private.h"
#include "AFIO_config.h"


void AFIO_voidSetExtiConfiguration(EXIN_LINE_t Copy_EXIN_LINE_t,u8 Copy_u8PortType )
{
	u8 Local_u8Reg=0;
	if(Copy_EXIN_LINE_t<= 3)
	{
		Local_u8Reg=0;
	}
	else if (Copy_EXIN_LINE_t<= 7)
	{
		Local_u8Reg=1;
		Copy_EXIN_LINE_t -=4;
	}
	else if (Copy_EXIN_LINE_t<= 11)
	{
		Local_u8Reg=2;
		Copy_EXIN_LINE_t -=8;
	}
	else if (Copy_EXIN_LINE_t<= 15)
	{
		Local_u8Reg=3;
		Copy_EXIN_LINE_t -=12;
	}
	AFIO->EXTICR[Local_u8Reg] &=~((0b1111)<<(Local_u8Reg*4)); //to masking the value before assigning
	AFIO->EXTICR[Local_u8Reg] |=((Copy_u8PortType)<<(Local_u8Reg*4)); //to assign the value configuration
}
