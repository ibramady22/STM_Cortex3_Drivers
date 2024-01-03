/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 9 December 2023                                                                       */
/*****************************************************************************************************/
#include <02-GPIO/GPIO_interface.h>
#include "STD_TYPES.h"

#include "../../03-HAL/01-LED/LED_config.h"
#include "../../03-HAL/01-LED/LED_interface.h"
#include "../../03-HAL/01-LED/LED_private.h"


void LED_voidOn(u8 Copy_u8LedNum)
{
	switch(Copy_u8LedNum)
	{
	case LED_1:
		GPIO_voidSetPinDirection(LED_1_PORT, LED_1_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_1_PORT, LED_1_PIN, GPIO_HIGH);
		break;
	case LED_2:
		GPIO_voidSetPinDirection(LED_2_PORT, LED_2_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_2_PORT, LED_2_PIN, GPIO_HIGH);
		break;
	case LED_3:
		GPIO_voidSetPinDirection(LED_3_PORT, LED_3_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_3_PORT, LED_3_PIN, GPIO_HIGH);
		break;
	case LED_4:
		GPIO_voidSetPinDirection(LED_4_PORT, LED_4_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_4_PORT, LED_4_PIN, GPIO_HIGH);
		break;
	case LED_5:
		GPIO_voidSetPinDirection(LED_5_PORT, LED_5_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_5_PORT, LED_5_PIN, GPIO_HIGH);
		break;
	case LED_6:
		GPIO_voidSetPinDirection(LED_6_PORT, LED_6_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_6_PORT, LED_6_PIN, GPIO_HIGH);
		break;
	default:
		/*   Return Error */
		break;

	}
}

void LED_voidOff(u8 Copy_u8LedNum)
{
	switch(Copy_u8LedNum)
	{
	case LED_1:
		GPIO_voidSetPinDirection(LED_1_PORT, LED_1_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_1_PORT, LED_1_PIN, GPIO_LOW);
		break;
	case LED_2:
		GPIO_voidSetPinDirection(LED_2_PORT, LED_2_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_2_PORT, LED_2_PIN, GPIO_LOW);
		break;
	case LED_3:
		GPIO_voidSetPinDirection(LED_3_PORT, LED_3_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_3_PORT, LED_3_PIN, GPIO_LOW);
		break;
	case LED_4:
		GPIO_voidSetPinDirection(LED_4_PORT, LED_4_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_4_PORT, LED_4_PIN, GPIO_LOW);
		break;
	case LED_5:
		GPIO_voidSetPinDirection(LED_5_PORT, LED_5_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_5_PORT, LED_5_PIN, GPIO_LOW);
		break;
	case LED_6:
		GPIO_voidSetPinDirection(LED_6_PORT, LED_6_PIN, OUTPUT_2MHZ_PUSH_PULL);
		GPIO_voidSetPinVal(LED_6_PORT, LED_6_PIN, GPIO_LOW);
		break;
	default:
		/*   Return Error */
		break;

	}
}


void LED_voidToggle(u8 Copy_u8LedNum)
{
	u16 wait=5000;
	LED_voidOn(Copy_u8LedNum);
	/* delay 5000*5000 */
	for(u16 i=0;i<wait;i++)
	{
		for(u16 j=0;j<wait;j++)
		{
			asm("NOP");
		}
	}

	LED_voidOff(Copy_u8LedNum);
	/* delay 5000*5000 */
	for(u16 i=0;i<wait;i++)
	{
		for(u16 j=0;j<wait;j++)
		{
			asm("NOP");
		}
	}
}
