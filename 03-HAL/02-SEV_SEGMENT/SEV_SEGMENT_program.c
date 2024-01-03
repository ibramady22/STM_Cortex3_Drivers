/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 9 December 2023                                                                       */
/*****************************************************************************************************/

#include <02-GPIO/GPIO_interface.h>
#include "STD_TYPES.h"

#include "../../03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_config.h"
#include "../../03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_interface.h"
#include "../../03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_private.h"




/*                            A  B  C  D  E  F  G                                       */
 static u8 S_Table[10][7]={  {1 ,1 ,1 ,1 ,1 ,1 ,0 },  //0
		                     {0 ,1 ,1 ,0 ,0 ,0 ,0 },  //1
						     {1 ,1 ,0 ,1 ,1 ,0 ,1 },  //2
		                     {1 ,1 ,1 ,1 ,0 ,0 ,1 },  //3
	                   	     {0 ,1 ,1 ,0 ,0 ,1 ,1 },  //4
		                     {1 ,0 ,1 ,1 ,0 ,1 ,1 },  //5
	                   	     {1 ,0 ,1 ,1 ,1 ,1 ,1 },  //6
		                     {1 ,1 ,1 ,0 ,0 ,0 ,0 },  //7
		                     {1 ,1 ,1 ,1 ,1 ,1 ,1 },  //8
		                     {1 ,1 ,1 ,1 ,0 ,1 ,1 }   //9
                                                      };





 void SEV_SEGMENT_voidDisplay(u8 Copy_u8Num)
 {
	 if(Copy_u8Num> 9 )
	 {
		 /* Return error */
	 }
	 /*set all pins output */
	 GPIO_voidSetPinDirection(A_PORT, A_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(B_PORT, B_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(C_PORT, C_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(D_PORT, D_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(E_PORT, E_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(F_PORT, F_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 GPIO_voidSetPinDirection(G_PORT, G_PIN, OUTPUT_2MHZ_PUSH_PULL);
	 if(SEVEN_SEGMENT_TYPE == COMMON_CATHODE)
	 {
		 /* set num on 7-segment*/
		 GPIO_voidSetPinVal(A_PORT, A_PIN, S_Table[Copy_u8Num][0]);
		 GPIO_voidSetPinVal(B_PORT, B_PIN, S_Table[Copy_u8Num][1]);
		 GPIO_voidSetPinVal(C_PORT, C_PIN, S_Table[Copy_u8Num][2]);
		 GPIO_voidSetPinVal(D_PORT, D_PIN, S_Table[Copy_u8Num][3]);
		 GPIO_voidSetPinVal(E_PORT, E_PIN, S_Table[Copy_u8Num][4]);
		 GPIO_voidSetPinVal(F_PORT, F_PIN, S_Table[Copy_u8Num][5]);
		 GPIO_voidSetPinVal(G_PORT, G_PIN, S_Table[Copy_u8Num][6]);
	 }
	 else
	 {
		 /* set num on 7-segment*/
		 GPIO_voidSetPinVal(A_PORT, A_PIN, !S_Table[Copy_u8Num][0]);
		 GPIO_voidSetPinVal(B_PORT, B_PIN, !S_Table[Copy_u8Num][1]);
		 GPIO_voidSetPinVal(C_PORT, C_PIN, !S_Table[Copy_u8Num][2]);
		 GPIO_voidSetPinVal(D_PORT, D_PIN, !S_Table[Copy_u8Num][3]);
		 GPIO_voidSetPinVal(E_PORT, E_PIN, !S_Table[Copy_u8Num][4]);
		 GPIO_voidSetPinVal(F_PORT, F_PIN, !S_Table[Copy_u8Num][5]);
		 GPIO_voidSetPinVal(G_PORT, G_PIN, !S_Table[Copy_u8Num][6]);
	}
 }

