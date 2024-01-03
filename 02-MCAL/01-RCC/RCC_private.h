/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 1 December 2023                                                                       */
/*****************************************************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


#define   RCC_BASE_ADDRESS                   0x40021000


                                                            /* base address + offset*/
#define RCC_CR                             (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0000))
#define RCC_CFGR                           (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0004))
#define RCC_CIR                            (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0008))
#define RCC_APB2RSTR                       (*(volatile u32* )(RCC_BASE_ADDRESS + 0x000C))
#define RCC_APB1RSTR                       (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0010))
#define RCC_AHBENR                         (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0014))
#define RCC_APB2ENR                        (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0018))
#define RCC_APB1ENR                        (*(volatile u32* )(RCC_BASE_ADDRESS + 0x001C))
#define RCC_BDCR                           (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0020))
#define RCC_CSR                            (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0024))
#define RCC_AHBSTR                         (*(volatile u32* )(RCC_BASE_ADDRESS + 0x0028))
#define RCC_CFGR2                          (*(volatile u32* )(RCC_BASE_ADDRESS + 0x002C))


/* Clock Types */
#define RCC_HSE_CRYSTAL    0
#define RCC_HSE_RC         1 
#define RCC_HSI            2
#define RCC_PLL            3

/* PLL Options */
#define RCC_PLL_IN_HSI_DIV_2    0
#define RCC_PLL_IN_HSE_DIV_2    1
#define RCC_PLL_IN_HSE          2

#endif
