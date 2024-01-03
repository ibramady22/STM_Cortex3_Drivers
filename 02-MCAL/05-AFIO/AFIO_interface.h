/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 17 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef AFIO_AFIO_INTERFACE_H_
#define AFIO_AFIO_INTERFACE_H_


typedef enum{
	LINE0,
	LINE1,
	LINE2,
	LINE3,
	LINE4,
	LINE5,
	LINE6,
	LINE7,
	LINE8,
	LINE9,
	LINE10,
	LINE11,
	LINE12,
	LINE13,
	LINE14,
	LINE15
}EXIN_LINE_t;

/*Select Port type:
 *                 PORT_A
 *                 PORT_B
 *                 PORT_C
 *                 PORT_D*/
#define PORT_A 0x1234
#define PORT_B 0x1234
#define PORT_C 0x1234
#define PORT_D 0x1234







void AFIO_voidSetExtiConfiguration(EXIN_LINE_t Copy_EXIN_LINE_t,u8 Copy_u8PortType );

#endif /* 05_AFIO_AFIO_INTERFACE_H_ */
