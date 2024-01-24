/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 January 2024                                                                       */
/*****************************************************************************************************/
#ifndef UART_UART_PRIVATE_H_
#define UART_UART_PRIVATE_H_



typedef struct {
	volatile u32 SR;
	volatile u32 DR;
	volatile u32 BRR;
	volatile u32 CR1;
	volatile u32 CR2;
	volatile u32 CR3;
	volatile u32 GRPR;
}UART_REG_t;

#define UART1  ((UART_REG_t*)0x40013800)


#endif /* 09_UART_UART_PRIVATE_H_ */
