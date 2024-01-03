/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 17 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef AFIO_AFIO_PRIVATE_H_
#define AFIO_AFIO_PRIVATE_H_

typedef struct {
	volatile u32 EVCR     ;
	volatile u32 MAPR	  ;
	volatile u32 EXTICR[4];
	volatile u32 MAPR2	  ;
}AFIO_t;

#define AFIO     ((volatile AFIO_t*)0x40010000)   //pointer to struct

#endif /* 05_AFIO_AFIO_PRIVATE_H_ */
