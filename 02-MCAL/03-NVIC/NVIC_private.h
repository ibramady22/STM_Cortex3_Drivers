/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 12 December 2023                                                                      */
/*****************************************************************************************************/
#ifndef NVIC_NVIC_PRIVATE_H_
#define NVIC_NVIC_PRIVATE_H_


#define NVIC_BASE_ADDRESS               0xE000E100
                                      /*Base Address    + Offset*/
#define NVIC_ISER0   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x000))
#define NVIC_ISER1   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x004))
#define NVIC_ICER0   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x080))
#define NVIC_ICER1   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x084))
#define NVIC_ISPR0   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x100))
#define NVIC_ISPR1   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x104))
#define NVIC_ICPR0   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x180))
#define NVIC_ICPR1   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x184))
#define NVIC_IABR0   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x200))
#define NVIC_IABR1   *((volatile u32*)(NVIC_BASE_ADDRESS+ 0x204))


/*IPR is considered as pointer to char and assigned later like the array */
#define NVIC_IPR    ((volatile u8*)(NVIC_BASE_ADDRESS+ 0x300))


#define SCB_BASE_ADDRESS               0xE000ED00
                                        /*Base Address  + Offset*/
#define SCB_AIRCR   *((volatile u32*)(SCB_BASE_ADDRESS+ 0x00C))


#endif /* 3_NVIC_NVIC_PRIVATE_H_ */
