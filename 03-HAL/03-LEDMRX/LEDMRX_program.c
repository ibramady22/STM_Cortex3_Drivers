/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 28 December 2023                                                                      */
/*****************************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "STK_interface.h"

#include "LEDMRX_interface.h"
#include "LEDMRX_config.h"
#include "LEDMRX_private.h"


void LEDMRX_voidInit(void)
{
	GPIO_voidSetPinDirection(LEDMRX_COL0_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL1_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL2_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL3_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL4_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL5_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL6_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_COL7_PIN, OUTPUT_2MHZ_PUSH_PULL);

	GPIO_voidSetPinDirection(LEDMRX_ROW0_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW1_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW2_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW3_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW4_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW5_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW6_PIN, OUTPUT_2MHZ_PUSH_PULL);
	GPIO_voidSetPinDirection(LEDMRX_ROW7_PIN, OUTPUT_2MHZ_PUSH_PULL);
}



void LEDMRX_voidDisplay(u8* Copy_u8Data)
{
	/* Column 0  */
	DisableAllCol();/*Disable all cols */
	SetRowVal(Copy_u8Data[0]);/* Set Row0 Value */
	GPIO_voidSetPinDirection(LEDMRX_COL0_PIN, GPIO_LOW);/*Enable Col0*/
	STK_voidSetBusyWait(2500); /* 2.5 ms delay */
	/* Column 1  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[1]);
	GPIO_voidSetPinDirection(LEDMRX_COL1_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 2  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[2]);
	GPIO_voidSetPinDirection(LEDMRX_COL2_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 3  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[3]);
	GPIO_voidSetPinDirection(LEDMRX_COL3_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 4  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[4]);
	GPIO_voidSetPinDirection(LEDMRX_COL4_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 5  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[5]);
	GPIO_voidSetPinDirection(LEDMRX_COL5_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 6  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[6]);
	GPIO_voidSetPinDirection(LEDMRX_COL6_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
	/* Column 7  */
	DisableAllCol();
	SetRowVal(Copy_u8Data[7]);
	GPIO_voidSetPinDirection(LEDMRX_COL7_PIN, GPIO_LOW);
	STK_voidSetBusyWait(2500);
}

static void DisableAllCol(void)
{
	GPIO_voidSetPinVal(LEDMRX_COL0_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL1_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL2_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL3_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL4_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL5_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL6_PIN, GPIO_HIGH);
	GPIO_voidSetPinVal(LEDMRX_COL7_PIN, GPIO_HIGH);
}

static void SetRowVal(u8 Copy_u8val)
{
	u8 Copy_u8Local;
	Copy_u8Local=READ_BIT(Copy_u8val,0);
	GPIO_voidSetPinVal(LEDMRX_ROW0_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,1);
	GPIO_voidSetPinVal(LEDMRX_ROW1_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,2);
	GPIO_voidSetPinVal(LEDMRX_ROW2_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,3);
	GPIO_voidSetPinVal(LEDMRX_ROW3_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,4);
	GPIO_voidSetPinVal(LEDMRX_ROW4_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,5);
	GPIO_voidSetPinVal(LEDMRX_ROW5_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,6);
	GPIO_voidSetPinVal(LEDMRX_ROW6_PIN, Copy_u8Local);

	Copy_u8Local=READ_BIT(Copy_u8val,7);
	GPIO_voidSetPinVal(LEDMRX_ROW7_PIN, Copy_u8Local);

}
