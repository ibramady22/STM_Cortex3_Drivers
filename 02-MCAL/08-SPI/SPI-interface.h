/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 18 January 2024                                                                       */
/*****************************************************************************************************/

#ifndef SPI_SPI_INTERFACE_H_
#define SPI_SPI_INTERFACE_H_

/*SPI Modes */
#define MASTER 1
#define SLAVE  0


/* Baud rate options */
typedef enum{
	CLK_2  ,
	CLK_4  ,
	CLK_8  ,
	CLK_16 ,
	CLK_32 ,
	CLK_64 ,
	CLK_128,
	CLK_256
}SPI_BUAD_RATE_t;

/*CLK Polarity Options */
typedef enum {
	POL_LOW,
	POL_HIGH
}SPI_PL_t;

/*CLK Phase Options */
typedef enum {
	PH_READ_WR,
	PH_WR_READ
}SPI_PH_t;

typedef enum{
	disabled,
	enabled
}SPI_INTERRUPT_t;

void SPI1_voidInit(void);
void SPI1_voidSendReceiveSunc(u8 Copy_u8DataTrans, u8* Copy_pu8DataRec);
void SPI1_voidInterrupt(SPI_INTERRUPT_t Copy_u8State);
void SPI1_voidSendReceiveAsync(u8 Copy_u8DataTrans, void(*CallBack)(u8 Copy_pu8DataRec));


#endif /* 08_SPI_SPI_INTERFACE_H_ */
