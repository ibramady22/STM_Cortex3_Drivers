


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"
#include "STK_interface.h"
#include "SEV_SEGMENT_interface.h"
#include "LEDMRX_interface.h"
#include "IR_interface.h"

#include "../03-HAL/01-LED/LED_interface.h"
#include "../03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_interface.h"



//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif


int main(void)
{

	SEV_SEGMENT_voidDisplay(8);
	RCC_InitSysClock();
	/* Enable RCC for GPIOA peripheral  */
	RCC_voidEnableClock(RCC_APB2, 2);
	/* Enable RCC for GPIOB peripheral */
	RCC_voidEnableClock(RCC_APB2, 3);
	/* Enable RCC for GPIOC peripheral */
	RCC_voidEnableClock(RCC_APB2, 4);
	NVIC_voidEnableInterrupt(1);

	GPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_2MHZ_PUSH_PULL);

	u16 w=1000;
    /* Loop forever */
	LED_voidOn(LED_1);
	SEV_SEGMENT_voidDisplay(2);
	while(1)
	{
		GPIO_voidSetPinVal(GPIOA, PIN1, GPIO_HIGH);
		for(u16 i=0;i<w;i++)
		{
			for(u16 j=0;i<w;j++)
			{
				asm("NOP");
			}
		}
		//GPIO_voidSetPinVal(GPIOA, PIN0, GPIO_LOW);
		for(u16 i=0;i<w;i++)
				{
					for(u16 j=0;i<w;j++)
					{
						asm("NOP");
					}
				}
	}

	return 0;
}
