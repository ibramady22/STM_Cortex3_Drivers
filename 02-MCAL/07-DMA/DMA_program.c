/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 7 January 2024                                                                        */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "NVIC_interface.h"

#include "DMA_interface.h"
#include "DMA_config.h"
#include "DMA_private.h"

void (*DMA_CALLBACK_CH1)(void);


void DMA_voidSetConfiguration( DMA_CH_t Copy_u8Channel , u8 Copy_u8Direction , u8 Copy_u8DMACircMode , u8 Copy_u8PINC ,
		u8 Copy_u8MINC , u8 Copy_MEMSize , u8 Copy_u8PERSize , u8 Copy_u8ChannelPriority )
{

	/* Disable Channel to allow Configuration */
	CLR_BIT(DMA ->Channel[Copy_u8Channel].CCR,0);
	while(READ_BIT(DMA ->Channel[Copy_u8Channel].CCR,0)==1);
	if(Copy_u8Direction==MEM_TO_MEM) //set MEM_TO_MEM bit
	{
		SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,14);
	}else if(Copy_u8Direction == PREI_TO_MEM)
	{
		CLR_BIT(DMA ->Channel[Copy_u8Channel].CCR,4);
	}else if(Copy_u8Direction == MEM_TO_PERI)
	{
		SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,4);
	}
	/* Enable/Disable Circular Mode */
	WRITE_BIT(DMA ->Channel[Copy_u8Channel].CCR,5,Copy_u8DMACircMode);
	/* Enable/Disable PINC Mode */
	WRITE_BIT(DMA ->Channel[Copy_u8Channel].CCR,6,Copy_u8PINC);
	/* Enable/Disable MINC Mode */
	WRITE_BIT(DMA ->Channel[Copy_u8Channel].CCR,7,Copy_u8MINC);
	/* Set Memory Size */
	DMA ->Channel[Copy_u8Channel].CCR |= (Copy_MEMSize<<10);
	/* Set Peripheral Size */
	DMA ->Channel[Copy_u8Channel].CCR |= (Copy_u8PERSize<<8);
	/* Set Priority type */
	DMA ->Channel[Copy_u8Channel].CCR |= (Copy_u8ChannelPriority<<8);


}

void DMA_voidDMAEnable( DMA_CH_t Copy_u8Channel )
{
	/*clear flags */
	SET_BIT(DMA ->IFCR,(4*Copy_u8Channel+0));
	SET_BIT(DMA ->IFCR,(4*Copy_u8Channel+1));
	SET_BIT(DMA ->IFCR,(4*Copy_u8Channel+2));
	SET_BIT(DMA ->IFCR,(4*Copy_u8Channel+3));
	/*Enable Channel*/
	SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,0);
}

void DMA_voidDMADisable( DMA_CH_t Copy_u8Channel ){

	CLR_BIT(DMA ->Channel[Copy_u8Channel].CCR,0);
}

void DMA_voidInterruptEnable( DMA_CH_t Copy_u8Channel )
{
	SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,1); //DMA_TCIE
	SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,2); //DMA_HTIE
	SET_BIT(DMA ->Channel[Copy_u8Channel].CCR,3); //DMA_TEIE
}

void DMA_voidSetAddress( DMA_CH_t Copy_u8Channel , u32 * PeripheralAddress , u32 * MemoryAddress , u16 Copy_u16NDT )
{
	/* Number of data to transfer */
	DMA ->Channel[Copy_u8Channel].CNDTR=Copy_u16NDT;
	/* peripheral address */
	DMA ->Channel[Copy_u8Channel].CPAR=(u32)PeripheralAddress;
	/* Memory address */
	DMA ->Channel[Copy_u8Channel].CMAR =(u32)MemoryAddress;
}
void DMA_voidClearFlag( DMA_CH_t Copy_u8Channel , u8 Copy_u8Flag )
{
	SET_BIT(DMA ->IFCR,(Copy_u8Channel*4+Copy_u8Flag));
}
u8 DMA_u8GetFlag( DMA_CH_t Copy_u8Channel , u8 Copy_u8Flag )
{
	u8 local_u8flag=READ_BIT(DMA ->IFCR,(Copy_u8Channel*4+Copy_u8Flag));
	return local_u8flag;
}

void DMA_voidSetCallback(void(*ptr)(void))
{
	DMA_CALLBACK_CH1=ptr;
}

void DMA1_Channel1_IRQHandler(void)
{
	DMA_CALLBACK_CH1();
}








