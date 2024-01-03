/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 16 December 2023                                                                      */
/*****************************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXIN_interface.h"
#include "EXIN_private.h"
#include "EXIN_config.h"


void (*EXTI0_CallBack) (void);

void EXIN_voidInit()
{

}
void EXIN_voidEnableEXIN(EXIN_LINE_t Copy_EXIN_LINE_t ,EXIN_MODE_t Copy_EXIN_MODE_t )
{
	switch(Copy_EXIN_MODE_t)
	{
	   case RISING:
		   SET_BIT(EXIN -> IMR ,Copy_EXIN_LINE_t); //enable
		   SET_BIT(EXIN-> RTSR,Copy_EXIN_LINE_t);  //set Mode
		   break;
	   case FALLING:
		   SET_BIT(EXIN -> IMR ,Copy_EXIN_LINE_t);
		   SET_BIT(EXIN-> FTSR,Copy_EXIN_LINE_t);
	       break;
	   case ON_CHANGE:
		   SET_BIT(EXIN -> IMR ,Copy_EXIN_LINE_t);
		   SET_BIT(EXIN-> RTSR,Copy_EXIN_LINE_t);
		   SET_BIT(EXIN-> FTSR,Copy_EXIN_LINE_t);
	       break;
	   default:
	   		  /*Return error*/
	       break;




	}
}
void EXIN_voidDisableEXIN(EXIN_LINE_t Copy_EXIN_LINE_t ,EXIN_MODE_t Copy_EXIN_MODE_t )
{
	 CLR_BIT(EXIN -> IMR ,Copy_EXIN_LINE_t);
}

void EXIN_VidSetCallBack( void (*ptr) (void) )
{

	EXTI0_CallBack = ptr;

}
void EXTI0_IRQHandler(void)
{

	EXTI0_CallBack();
	SET_BIT( EXIN->PR , 0 ); //flag

}
