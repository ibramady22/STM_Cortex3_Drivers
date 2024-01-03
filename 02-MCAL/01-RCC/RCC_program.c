/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 1 December 2023                                                                       */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	/* input validation */
	if(Copy_u8PerId>31) 
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  :  SET_BIT(RCC_AHBENR,Copy_u8PerId) ;                                break;
			case RCC_APB1 :  SET_BIT(RCC_APB1ENR,Copy_u8PerId) ;                               break;
			case RCC_APB2 :  SET_BIT(RCC_APB2ENR,Copy_u8PerId) ;                               break;
		    default       :           /*return error */                                        break;
		}
	}
	else
	{
		/*return error */
	}
}


void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	/* input validation */
	if(Copy_u8PerId>31) 
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  :  CLR_BIT(RCC_AHBENR,Copy_u8PerId) ;                                break;
			case RCC_APB1 :  CLR_BIT(RCC_APB1ENR,Copy_u8PerId) ;                               break;
			case RCC_APB2 :  CLR_BIT(RCC_APB2ENR,Copy_u8PerId) ;                               break;
		    default       :            /*return error */                                       break;
		}
	}
	else
	{
		/*return error */
	}
}


void RCC_InitSysClock(void)
{
	#if     RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
	    RCC_CR   = 0x00010000;  /* enable HSE with no bypass */
		/*suppose AHB==Source  APB1==APB2==AHB   no_prescaller*/
	    RCC_CFGR = 0x00000001 ;  /* make HSE the source clock */
	#elif   RCC_CLOCK_TYPE == RCC_HSE_RC 
	    RCC_CR = 0x00050000;    /* enable HSE with  bypass */
		/*suppose AHB==Source  APB1==APB2==AHB   no_prescaller*/
		RCC_CFGR = 0x00000001;  /* make HSE the source clock */
	#elif   RCC_CLOCK_TYPE == RCC_HSI  
	    RCC_CR = 0x00000081;    /* enable HSI + trimming =0 */
		/*suppose AHB==Source  APB1==APB2==AHB   no_prescaller*/
		RCC_CFGR = 0x00000000;  /* make HSI the source clock */
	#elif   RCC_CLOCK_TYPE == RCC_PLL
//	    #if    RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
//
//		#elif  RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
//
//
//		#elif  RCC_PLL_INPUT == RCC_PLL_IN_HSE
//        #endif
//
    #else   
            #error("you choiced wrong clock")
    #endif		
}
