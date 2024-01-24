/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 18 January 2024                                                                       */
/*****************************************************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "GPIO_interface.h"

#include "SPI-interface.h"
#include "SPI-confih.h"
#include "SPI-private.h"



void (*SPI_CALL_BACK)(u8);

void SPI1_voidInit(void)
{
	/* enable SPI */
	SET_BIT(SPI -> CR1,6);
	/* SPI BUAD RATE */
	SPI ->CR1 &= ~(0b0000000000111000); //clear bits 3,4,5
	SPI ->CR1 |= (SPI_BUAD_RATE<<2);
	/*Frame format 1 byte, LSB */
	CLR_BIT(SPI -> CR1,11);

	/* SPI Polarity */
	WRITE_BIT(SPI -> CR1,1,SPI_POLARITY);
	/* SPI Phase */
	WRITE_BIT(SPI -> CR1,0,SPI_PHASE);
	/* SPI mode */
	if(SPI_MODE==MASTER)
	{
		SET_BIT(SPI -> CR1,7);
		SET_BIT(SPI -> CR1,8);
		WRITE_BIT(SPI -> CR1,2,SPI_MODE);
	}
	else //slave
	{
		CLR_BIT(SPI -> CR1,7); //ss connected software
		WRITE_BIT(SPI -> CR1,2,SPI_MODE);
	}

}


void SPI1_voidSendReceiveSunc(u8 Copy_u8DataTrans, u8* Copy_pu8DataRec)
{
	/* clear slave select pin */
	GPIO_voidSetPinVal(SPI_SS_PIN, GPIO_LOW);
	/* send data */
	SPI -> DR=Copy_u8DataTrans;
	/* busy wait till operation done */
	while(READ_BIT(SPI->SR,7));
	/* receive data */
	*Copy_pu8DataRec=SPI -> DR;
	/* set slave select pin */
	GPIO_voidSetPinVal(SPI_SS_PIN, GPIO_HIGH);
}

void SPI1_voidInterrupt(SPI_INTERRUPT_t Copy_u8State)
{
	/* enable or disable SPI interrupt */
	WRITE_BIT(SPI -> CR2 ,7,Copy_u8State);
}
void SPI1_voidSendReceiveAsync(u8 Copy_u8DataTrans, void(*CallBack)(u8 Copy_pu8DataRec))
{
	/* clear slave select pin */
		GPIO_voidSetPinVal(SPI_SS_PIN, GPIO_LOW);
		/* send data */
		SPI -> DR=Copy_u8DataTrans;
		SPI_CALL_BACK=CallBack;
}

void SPI1_IRQHandler(void){

	SPI_CALL_BACK(SPI -> DR);
}

