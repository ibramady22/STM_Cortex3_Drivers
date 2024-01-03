/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 16 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef EXIN_EXIN_PRIVATE_H_
#define EXIN_EXIN_PRIVATE_H_

typedef struct {
	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;
}EXIN_t;

#define EXIN     ((volatile EXIN_t*)0x40010400)   //pointer to struct

#endif /* 04_EXIN_EXIN_PRIVATE_H_ */
