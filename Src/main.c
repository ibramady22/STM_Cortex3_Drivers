


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"
#include "STK_interface.h"
#include "SEV_SEGMENT_interface.h"
#include "LEDMRX_interface.h"
#include "IR_interface.h"
#include "DMA_interface.h"
#include "STP_interface.h"





int main(void)
{
	/* Clock Initialisation */
	RCC_InitSysClock();
	RCC_voidEnableClock(RCC_APB2, 2); /* Enable RCC for GPIOA */
	RCC_voidEnableClock(RCC_APB2, 3);
	/* Pin Directions */
	GPIO_voidSetPinDirection(GPIOA, PIN0, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_2MHZ_PUSH_PULL);

	/* Timer Initialisation */
	STK_voidInit();

	/* Test serial to parallel Driver */
	STP_voidSendDataSynchronous(0xAA); //0b10101010

	while(1)
	{
		/* Enter your Runnable Code */
	}
	return 0;
}
