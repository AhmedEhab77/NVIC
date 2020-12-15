/*************************************************/
/**               AUTHOR : AHMED EHAB           **/                        
/**               VERSION : V0.1                **/
/*************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "NVIC_interface.h"
#include "NVIC_macros.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

 /****How Many Groups And Sub Groups****/
void MNVIC_VidInit(void)
{
	#define   SCB_AIRCR     *( (volatile u32*) (0xE000ED00+0x0C) )
	/*******CONFIG HOW MANY GROUPS AND SUBGROUPS******/      
	 #if      NUMBER_GROUPS_SUBGROUPS ==  GROUPS_16_SUB_0 
	 SCB_AIRCR |= GROUPS_16_SUB_0 <<  8;
	 #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_8_SUB_2 
	 SCB_AIRCR |= GROUPS_8_SUB_2  <<  8;
	 #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_4_SUB_4 
	 SCB_AIRCR |= GROUPS_4_SUB_4  <<  8;
	 #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_2_SUB_8
     SCB_AIRCR |= GROUPS_2_SUB_8  <<  8;	 
     #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_0_SUB_16 
	 SCB_AIRCR |= GROUPS_0_SUB_16 <<  8;
	 #endif
}


     
/****Set Interrupt Software Priority****/											                      
ERROR_STATUS MNVIC_u8SetInterruptPiriority(u8  Copy_u8IdInterrupt,u8 Copy_u8GroupPiriority,u8 Copy_u8SubGroupPiriority)
{
	ERROR_STATUS LOC_u8State=NOK;
	u8 Copy_u8Temp=0;
	if(( Copy_u8IdInterrupt < 60))
	{
	 
	     #if      NUMBER_GROUPS_SUBGROUPS ==  GROUPS_16_SUB_0 
	     if(Copy_u8GroupPiriority <= 16 && Copy_u8SubGroupPiriority==0 )
	     {
	      Copy_u8Temp |= Copy_u8GroupPiriority   << 4;
	     }
	     #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_8_SUB_2 
	     if(Copy_u8GroupPiriority <= 8 && Copy_u8SubGroupPiriority<=2 )
	     {
	   	 Copy_u8Temp |= Copy_u8GroupPiriority    << 5;
	   	 Copy_u8Temp |= Copy_u8SubGroupPiriority << 4; 
	     }
	     #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_4_SUB_4
         if(Copy_u8GroupPiriority <= 4 && Copy_u8SubGroupPiriority<=4 )
	     {
	   	 Copy_u8Temp |= Copy_u8GroupPiriority    << 6;
	   	 Copy_u8Temp |= Copy_u8SubGroupPiriority << 4; 
	     }	 
	     #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_2_SUB_8
         if(Copy_u8GroupPiriority <= 2 && Copy_u8SubGroupPiriority<=8 )
	     {
	   	 Copy_u8Temp |= Copy_u8GroupPiriority    << 7;
	   	 Copy_u8Temp |= Copy_u8SubGroupPiriority << 4; 
	     }	 
         #elif    NUMBER_GROUPS_SUBGROUPS ==  GROUPS_0_SUB_16 
	      if(Copy_u8GroupPiriority == 0 && Copy_u8SubGroupPiriority<=16 )
	     {
		  Copy_u8Temp |= Copy_u8SubGroupPiriority << 4;
	     }
		 
	     #endif
	
	     NVIC_IPR[Copy_u8IdInterrupt] = Copy_u8Temp;
		  LOC_u8State=OK;
	}
	return LOC_u8State;
}

ERROR_STATUS MNVIC_u8Enable(u8 Copy_u8IdInterrupt)
{
	ERROR_STATUS LOC_u8State=NOK;
	if(Copy_u8IdInterrupt<=31)
	{
		NVIC_ISER0=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	else if(Copy_u8IdInterrupt>=32 && Copy_u8IdInterrupt<=59)
	{
		Copy_u8IdInterrupt-=32;
		NVIC_ISER1=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	return LOC_u8State;
}


ERROR_STATUS MNVIC_u8Disable(u8 Copy_u8IdInterrupt)
{
	ERROR_STATUS LOC_u8State=NOK;
	if(Copy_u8IdInterrupt<=31)
	{
		NVIC_ICER0=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	else if(Copy_u8IdInterrupt>=32 && Copy_u8IdInterrupt<=59)
	{
		Copy_u8IdInterrupt-=32;
		NVIC_ICER1=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	return LOC_u8State;
}


	
ERROR_STATUS MNVIC_u8SetPendingFlag(u8 Copy_u8IdInterrupt)
{
	ERROR_STATUS LOC_u8State=NOK;
	if(Copy_u8IdInterrupt<=31)	
	{	
		NVIC_ISPR0=(1<<Copy_u8IdInterrupt);	
		LOC_u8State=OK;	
	}
	else if(Copy_u8IdInterrupt>=32 && Copy_u8IdInterrupt<=59)	
	{
		Copy_u8IdInterrupt-=32;
		NVIC_ISPR1=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	return LOC_u8State;
}


ERROR_STATUS MNVIC_u8ClearPendingFlag(u8 Copy_u8IdInterrupt)
{
	ERROR_STATUS LOC_u8State=NOK;	
	if(Copy_u8IdInterrupt<=31)	
	{	
		NVIC_ICPR0=(1<<Copy_u8IdInterrupt);	
		LOC_u8State=OK;	
	}
	else if(Copy_u8IdInterrupt>=32 && Copy_u8IdInterrupt<=59)	
	{
		Copy_u8IdInterrupt-=32;
		NVIC_ICPR1=(1<<Copy_u8IdInterrupt);
		LOC_u8State=OK;
	}
	return LOC_u8State;
}


ERROR_STATUS MNVIC_u8GetActiveFlag(u8 Copy_u8IdInterrupt,u8*Active_Value)
{
	ERROR_STATUS LOC_u8State=NOK;	
	if(Copy_u8IdInterrupt<=31)	
	{	
		*Active_Value=GET_BIT(NVIC_IAPR0,Copy_u8IdInterrupt);	
		LOC_u8State=OK;	
	}
	else if(Copy_u8IdInterrupt>=32 && Copy_u8IdInterrupt<=59)	
	{
		Copy_u8IdInterrupt-=32;
		*Active_Value=GET_BIT(NVIC_IAPR1,Copy_u8IdInterrupt);;
		LOC_u8State=OK;
	}
	return LOC_u8State;
}




