/*****************************************************************************************************/
/*  Author   : IBRAHIM MADY                                                                          */
/*  Version  : V01                                                                                   */
/*  Date     : 3 January 2024                                                                        */
/*****************************************************************************************************/
#ifndef IR_IR_INTERFACE_H_
#define IR_IR_INTERFACE_H_


#define DATA_COMMEND_START_EDGE  17
#define DATA_COMMEND_END_EDGE    25

/* TAKE pointer to function Including action according to data value
 * Enable Exti0 to falling edge
 * Initialise SysTick
 * */
void IR_voidInit(void(*ptr_func)(void ));





#endif /* 04_IR_IR_INTERFACE_H_ */
