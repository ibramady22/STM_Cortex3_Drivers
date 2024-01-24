/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 January 2024                                                                       */
/*****************************************************************************************************/
#ifndef UART_UART_INTERFACE_H_
#define UART_UART_INTERFACE_H_

/*baudRate options*/
#define BAUD_9600      0
#define BAUD_115200    1


/*Word length options*/
#define WORD_8      0
#define WORD_9      1

/* Parity options*/
#define PARITY_ENABLE  1
#define PARITY_DISABLE 0
#define PARITY_EVEN    0
#define PARITY_ODD    1

/* Interrupt types in UART */
typedef enum
{
	Error_INT,
	IDLE_INT = 4,
	RXNEmpty_INT,
	TXCompelete_INT,
	TXEmpty_INT,
	ParityEror_INT,
}UART_INT_t;

void UART_voidInit(void);
void UART_voidBusySendByte(u8 copy_u8Data);
void UART_voidAsyncSendByte(u8 copy_u8Data);
void UART_voidBusySendString(u8* str);
u8   UART_voidBusyReceiveByte(void);
u8   UART_voidAsyncReceiveByte(void);
void UART_voidBusyReceiveString( u8 buffer[], u8* buffer_size);
void UART_voidEnableInt( UART_INT_t copy_u8Intnum);
void UART_voidDisableInt( UART_INT_t copy_u8Intnum);
void UART_enIntCallBack( void (*ptr)(void));



#endif /* 09_UART_UART_INTERFACE_H_ */
