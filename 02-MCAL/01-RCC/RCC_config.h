/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 1 December 2023                                                                       */
/*****************************************************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H



/* Options :  RCC_HSE_CRYSTAL
              RCC_HSE_RC
			  RCC_HSI
			  RCC_PLL               */
#define RCC_CLOCK_TYPE    RCC_HSI

/* Options : RCC_PLL_IN_HSI_DIV_2
             RCC_PLL_IN_HSE_DIV_2
			 RCC_PLL_IN_HSE          */
/* note: choose value if only you selected PLL as input clock source */
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_INPUT RCC_PLL_IN_HSI_DIV_2
#endif

/* options :   2 to 16     */
/* note: choose value if only you selected PLL as input clock source */
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_MUL_VAL 2 
#endif




#endif