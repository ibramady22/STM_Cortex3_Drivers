/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 7 January 2024                                                                        */
/*****************************************************************************************************/

#ifndef DMA_DMA_INTERFACE_H_
#define DMA_DMA_INTERFACE_H_

//DMA Flags
#define DMA_GIF   0
#define DMA_TCIF  1
#define DMA_HTIF  2
#define DMA_TEIF  3

/* DMA Channels */
typedef enum{
	CHANNWL1=0,
	CHANNWL2,
	CHANNWL3,
	CHANNWL4,
	CHANNWL5,
	CHANNWL6,
	CHANNWL7
}DMA_CH_t;

//Interrupt Enable
#define DMA_TCIE  1
#define DMA_HTIE  2
#define DMA_TEIE  3

//Circular
#define DMA_ENABLE_CIRCULAR  1
#define DMA_DISABLE_CIRCULAR 0

//DMA Configuration
//Direction
#define MEM_TO_MEM   0
#define PREI_TO_MEM  1
#define MEM_TO_PERI  2
//PINC
#define PERIPHERAL_INCREMENT_ENABLE  1
#define PERIPHERAL_INCREMENT_DISABLE 0
//MINC
#define MEM_INCREMENT_ENABLE  1
#define MEM_INCREMENT_DISABLE 0
//MEM_Size and PER_Size
#define BYTE       0
#define HALF_WORD  1
#define WORD       2

//Channel Priority
#define DMA_LOW         0
#define DMA_MEDIUM      1
#define DMA_HIGH        2
#define DMA_VERY_HIGH   3



void DMA_voidSetConfiguration( DMA_CH_t Copy_u8Channel , u8 Copy_u8Direction , u8 Copy_u8DMACircMode , u8 Copy_u8PINC ,
		u8 Copy_u8MINC , u8 Copy_MEMSize , u8 Copy_u8PERSize , u8 Copy_u8ChannelPriority );
void DMA_voidDMAEnable( DMA_CH_t Copy_u8Channel );
void DMA_voidDMADisable( DMA_CH_t Copy_u8Channel );
void DMA_voidInterruptEnable( DMA_CH_t Copy_u8Channel );
void DMA_voidSetAddress( DMA_CH_t Copy_u8Channel , u32 * PeripheralAddress , u32 * MemoryAddress , u16 Copy_u16NDT );
void DMA_voidClearFlag( DMA_CH_t Copy_u8Channel , u8 Copy_u8Flag );
u8 DMA_u8GetFlag( DMA_CH_t Copy_u8Channel , u8 Copy_u8Flag );
void DMA_voidSetCallback(void(*ptr)(void));









#endif /* 07_DMA_DMA_INTERFACE_H_ */
