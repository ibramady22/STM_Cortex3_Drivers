/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 18 January 2024                                                                       */
/*****************************************************************************************************/

#ifndef SPI_SPI_CONFIH_H_
#define SPI_SPI_CONFIH_H_

/* Select SPI Mode : MASTER
 *                 : SLAVE       */
#define SPI_MODE MASTER

/* Select SPI BuadRate :CLK_2
	                    CLK_4
	                    CLK_8
	                    CLK_16
	                    CLK_32
	                    CLK_64
	                    CLK_128
                    	CLK_256  */
#define SPI_BUAD_RATE  CLK_4

/* select CLK Polarity Options: POL_LOW
	                    POL_HIGH */
#define SPI_POLARITY POL_LOW

/* select CLK Phase Options: PH_READ_WR
	                         PH_WR_READ */
#define SPI_PHASE PH_WR_READ

/* configure SS_PIN in PORT,PIN */
#define SPI_SS_PIN GPIOA,7




#endif /* 08_SPI_SPI_CONFIH_H_ */
