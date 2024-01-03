/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 6 December 2023                                                                       */
/*****************************************************************************************************/

#include "BIT_MATH.h"
//#include "STD_TYPES.h"


#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"



void GPIO_voidSetPinDirection(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Mode)
{
	switch(Copy_u8PortID)
	{
	case GPIOA:
		if(Copy_u8PinID <= 7)
		{
			/*each Pin has 4 Bits*/
			GPIOA_CRL &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOA_CRL |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else if (Copy_u8PinID <= 15)
		{
			Copy_u8PinID -=8; /*Mapping*/
			GPIOA_CRH &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOA_CRH |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else
		{
			/* Return Error */
		}
	break;
	case GPIOB:
		if(Copy_u8PinID <= 7)
		{
			/*each Pin has 4 Bits*/
			GPIOB_CRL &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOB_CRL |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else if (Copy_u8PinID <= 15)
		{
			Copy_u8PinID -=8; /*Mapping*/
			GPIOB_CRH &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOB_CRH |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else
		{
			/* Return Error */
		}
	break;
	case GPIOC:
		if(Copy_u8PinID <= 7)
		{
			/*each Pin has 4 Bits*/
			GPIOC_CRL &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOC_CRL |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else if (Copy_u8PinID <= 15)
		{
			Copy_u8PinID -=8; /*Mapping*/
			GPIOC_CRH &= ~ ((0b1111)<< (Copy_u8PinID*4));  /* Reset Register*/
			GPIOC_CRH |=   ((Copy_u8Mode)<< (Copy_u8PinID*4)); /*set Mode */
		}
		else
		{
			/* Return Error */
		}
	break;
	default:
		/* Return Error*/
	break;
	}
}

void GPIO_voidSetPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Val)
{
	switch(Copy_u8PortID)
		{
		case GPIOA:
			if(Copy_u8Val == GPIO_LOW )
			{
				CLR_BIT(GPIOA_ODR,Copy_u8PinID); /*each Pin has 1 bit*/
			}
			else if (Copy_u8Val == GPIO_HIGH)
			{
				SET_BIT(GPIOA_ODR,Copy_u8PinID);
			}
			else
			{
				/* Return Error */
			}
	        break;
		case GPIOB:
			if(Copy_u8Val == GPIO_LOW )
			{
				CLR_BIT(GPIOB_ODR,Copy_u8PinID);
			}
			else if (Copy_u8Val == GPIO_HIGH)
			{
				SET_BIT(GPIOB_ODR,Copy_u8PinID);
			}
			else
			{
				/* Return Error */
			}
	        break;
		case GPIOC:
			if(Copy_u8Val == GPIO_LOW )
			{
				CLR_BIT(GPIOC_ODR,Copy_u8PinID);
			}
			else if (Copy_u8Val == GPIO_HIGH)
			{
				SET_BIT(GPIOC_ODR,Copy_u8PinID);
			}
			else
			{
				/* Return Error */
			}
	        break;
		default: /* Return Error */
			break;
		}
}

u8 GPIO_u8GetPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID)
{
	u8 Loc_u8Result=0;
	switch(Copy_u8PortID)
		{
		case GPIOA: Loc_u8Result=READ_BIT(GPIOA_IDR,Copy_u8PinID);  break;
		case GPIOB: Loc_u8Result=READ_BIT(GPIOB_IDR,Copy_u8PinID);  break;
		case GPIOC: Loc_u8Result=READ_BIT(GPIOC_IDR,Copy_u8PinID);  break;
		default: /* Return Error */                                 break;
		}
	return Loc_u8Result;

}



