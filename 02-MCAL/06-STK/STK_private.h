/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 21 December 2023                                                                      */
/*****************************************************************************************************/


#ifndef STK_STK_PRIVATE_H_
#define STK_STK_PRIVATE_H_


typedef struct{
	 u32 CTRL;
	 u32 LOAD;
	 u32 VAL;
	 u32 CALIB;
}STK_t;

/* pointer to struct */
#define  STK                   ((volatile STK_t*)0xE000E010)



#endif /* 06_STK_STK_PRIVATE_H_ */
