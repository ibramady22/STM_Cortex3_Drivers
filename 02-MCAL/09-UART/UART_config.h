/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 January 2024                                                                       */
/*****************************************************************************************************/

#ifndef UART_UART_CONFIG_H_
#define UART_UART_CONFIG_H_

/*Select baudRate options:
 *                       BAUD_9600
 *                       BAUD_115200  */
#define UART_BAUD       BAUD_9600

/*Select WordLenth options:
 *                       WORD_8
 *                       WORD_9  */
#define UART_WORD       WORD_8

/*Select parity availability options:
 *                                   PARITY_ENABLE
 *                                   PARITY_DISABLE*/
#define UART_PARITY  PARITY_ENABLE

/*Select parity mode options:
 *                                   PARITY_EVEN
 *                                   PARITY_ODD */
/*selected only if parity is enabled */
#define UART_PARITY_MODE  PARITY_EVEN

/*SIGN for END OF STRING in Receiving String */
#define END_STRING '#'


#endif /* 09_UART_UART_CONFIG_H_ */
