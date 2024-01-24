/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 18 January 2024                                                                       */
/*****************************************************************************************************/

#ifndef SPI_SPI_PRIVATE_H_
#define SPI_SPI_PRIVATE_H_

typedef struct{
	volatile u32 CR1     ;
	volatile u32 CR2     ;
	volatile u32 SR      ;
	volatile u32 DR      ;
	volatile u32 CRCPR   ;
	volatile u32 RXCRCR  ;
	volatile u32 TXCRCR  ;
	volatile u32 I2SCFGR ;
	volatile u32 I2SPR   ;

}SPI_REG_t;

#define SPI         ((SPI_REG_t*)0x4013000)




#endif /* 08_SPI_SPI_PRIVATE_H_ */
