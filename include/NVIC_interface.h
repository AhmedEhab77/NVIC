/*************************************************/
/**               AUTHOR : AHMED EHAB           **/                        
/**               VERSION : V0.1                **/
/*************************************************/

#ifndef   _NVIC_INTERFACE_H_
#define   _NVIC_INTERFACE_H_

void MNVIC_VidInit(void);
 /*****************************************************************************/
/******************************************************************************/
/**	Function Name	: MNVIC_VidInit.						                 **/
/**	Return Type		: void					   		   	 	                 **/
/**	Arguments		: void                                                   **/
/**	Functionality	:Init NVIC how many groups and sub groups           	 **/
/******************************************************************************/
/******************************************************************************/
ERROR_STATUS MNVIC_u8SetInterruptPiriority(u8  Copy_u8IdInterrupt,u8 Copy_u8GroupPiriority,u8 Copy_u8SubGroupPiriority);
 /**********************************************************************************/
/***********************************************************************************/
/**	Function Name	: MNVIC_u8SetInterruptPiriority.					          **/
/**	Return Type		: enum					   		   	 	                      **/
/**	Arguments		: Interrupt number from 0to59,GroupPiriority,SubGroupPiriority**/                          
/**	Functionality	:Init NVIC how many groups and sub groups           	      **/
/***********************************************************************************/
/***********************************************************************************/
 ERROR_STATUS MNVIC_u8Enable(u8 Copy_u8IdInterrupt);
 /*****************************************************************************/
/******************************************************************************/
/**	Function Name	: MNVIC_u8Enable.						                 **/
/**	Return Type		: enum					   		   	 	                 **/
/**	Arguments		: Interrupt number from 0 to 59  vector table            **/
/**	Functionality	: Enabling NVIC for specific interrupt           	     **/
/******************************************************************************/
/******************************************************************************/
ERROR_STATUS MNVIC_u8Disable(u8 Copy_u8IdInterrupt);
 /*****************************************************************************/
/******************************************************************************/
/**	Function Name	: MNVIC_u8Disable.						                 **/
/**	Return Type		: enum.					   		   	 	                 **/
/**	Arguments		: Interrupt number from 0 to 59 vector table             **/
/**	Functionality	: Disabling NVIC for specific interrupt           	     **/
/******************************************************************************/
/******************************************************************************/
ERROR_STATUS MNVIC_u8ClearPendingFlag(u8 Copy_u8IdInterrupt);
 /*****************************************************************************/
/******************************************************************************/
/**	Function Name	: MNVIC_u8ClearPendingFlag.						         **/
/**	Return Type		: u8.					   		   	 	                 **/
/**	Arguments		: Interrupt number from 0 to 59 from vector table        **/
/**	Functionality	: Clearing Pending flag(4 flags) for specific interrupt  **/
/******************************************************************************/
/******************************************************************************/
ERROR_STATUS MNVIC_u8SetPendingFlag(u8 Copy_u8IdInterrupt);
 /*****************************************************************************/
/******************************************************************************/
/**	Function Name	: MNVIC_u8SetPendingFlag.						         **/
/**	Return Type		: enum.					   		   	 	                 **/
/**	Arguments		: Interrupt number from 0 to 59 vector table             **/
/**	Functionality	: Setting Pending flag(4 flags) for specific interrupt   **/
/******************************************************************************/
/******************************************************************************/
ERROR_STATUS MNVIC_u8GetActiveFlag(u8 Copy_u8IdInterrupt,u8*Active_Value);
 /******************************************************************************/
/*******************************************************************************/
/**	Function Name	: MNVIC_u8GetActiveFlag.						          **/
/**	Return Type		: enum.					   		   	 	                  **/
/**	Arguments		:Interrupt number from 0 to 59 and Pointer to get result  **/
/**	Functionality	: Getting the result of active flag for specific interrupt**/
/*******************************************************************************/
/*******************************************************************************/
 
 
 
 
 
 
 

#endif