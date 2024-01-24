/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 January 2024                                                                       */
/*****************************************************************************************************/


#ifndef UART_UART_PROGRAM_C_
#define UART_UART_PROGRAM_C_

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "UART_interface.h"
#include "UART_config.h"
#include "UART_private.h"

void (*UART1_CallBack)(void);

void UART_voidInit(void)
{
	/*  Baud=(F/16*UARTDIV)
	*   F=8MHZ
	*   9600 BRR=?
	*   115200 BRR=?          */
	if(UART_BAUD==BAUD_9600)
	{
		UART1 ->BRR=0x341;
	}
	else if (UART_BAUD==BAUD_115200)
	{
		UART1 ->BRR=0x046;
	}
	/* Enable TX */
	SET_BIT(UART1 ->CR1,3);
	/* Enable RX */
	SET_BIT(UART1 ->CR1,2);
	/*DATA bits*/
	WRITE_BIT(UART1 ->CR1,12,UART_WORD);


	/* Enable UART */
	SET_BIT(UART1 ->CR1,13);
	/* Clear Status Register */
	UART1->SR=0;

}


 void UART_voidBusySendByte(u8 copy_u8Data)
{
	 /* till Transmission is complete */
	 while(READ_BIT(UART1->SR,6)==0);
	 UART1 ->DR=copy_u8Data;
}

 void UART_voidAsyncSendByte(u8 copy_u8Data)
 {
 	 /* till Transmission is complete */
 	 UART1 ->DR=copy_u8Data;
 }

void UART_voidBusySendString(u8* str)
{
	u8 i=0;
	/* string */
	while(str[i])
	{
		UART1 ->DR=str[i];
		/* till Transmission is complete */
		while(READ_BIT(UART1->SR,6)==0);
		i++;
	}
}
u8   UART_voidBusyReceiveByte(void)
{
	/* till Receive is complete */
		while(READ_BIT(UART1->SR,5)==0);
		return (u8)(UART1 ->DR);
}
u8   UART_voidAsyncReceiveByte(void)
{
	/* till Receive is complete */
		return (u8)(UART1 ->DR);
}

void UART_voidBusyReceiveString( u8 buffer[], u8* buffer_size)
{
	u8 Copy_u8temp=UART_voidBusyReceiveByte();
	u8 iter=0;
	while(Copy_u8temp!= END_STRING)
	{
		Copy_u8temp=UART_voidBusyReceiveByte();
		iter++;
	}
	* buffer_size=iter;
}

void UART_voidEnableInt( UART_INT_t copy_u8Intnum)
{
		SET_BIT(UART1 ->CR1 , copy_u8Intnum);
}

void UART_voidDisableInt( UART_INT_t copy_u8Intnum)
{
		CLR_BIT(UART1 ->CR1 , copy_u8Intnum);
}

void UART_enIntCallBack( void (*ptr)(void))
{
		UART1_CallBack = ptr;
}

void USART1_IRQHandler (void)
{
		UART1_CallBack();
}

#endif /* 09_UART_UART_PROGRAM_C_ */
