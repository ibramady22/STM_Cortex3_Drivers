/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 16 December 2023                                                                      */
/*****************************************************************************************************/

#ifndef EXIN_EXIN_INTERFACE_H_
#define EXIN_EXIN_INTERFACE_H_


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



typedef enum{
	RISING,
	FALLING,
	ON_CHANGE
}EXIN_MODE_t;

void EXIN_voidInit();
void EXIN_voidEnableEXIN(EXIN_LINE_t Copy_EXIN_LINE_t ,EXIN_MODE_t Copy_EXIN_MODE_t );
void EXIN_voidDisableEXIN(EXIN_LINE_t Copy_EXIN_LINE_t ,EXIN_MODE_t Copy_EXIN_MODE_t );

void EXIN_VidSetCallBack( void (*ptr) (void) );




#endif /* 04_EXIN_EXIN_INTERFACE_H_ */
