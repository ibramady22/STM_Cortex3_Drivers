/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 7 January 2024                                                                        */
/*****************************************************************************************************/

#ifndef DMA_DMA_PRIVATE_H_
#define DMA_DMA_PRIVATE_H_


/* each channel has these registers*/
typedef struct{
	volatile u32 CCR;
	volatile u32 CNDTR;
	volatile u32 CPAR;
	volatile u32 CMAR;
	volatile u32 RESERVED;
}CHANNEL_REG_t;

/* Peripheral Registers */
typedef struct{
	volatile u32 ISR;
	volatile u32 IFCR;
	CHANNEL_REG_t Channel[7];
}DMA_t;

#define DMA        ((volatile  DMA_t *)0x40020000)


#endif /* 07_DMA_DMA_PRIVATE_H_ */
