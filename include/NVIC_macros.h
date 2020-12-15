/*************************************************/
/**               AUTHOR : AHMED EHAB           **/                        
/**               VERSION : V0.1                **/
/*************************************************/

#ifndef   _NVIC_MACROS_H_
#define   _NVIC_MACROS_H_


/************GROUP PIRIORITES****************/
typedef enum
{
       GROUP_U8_0 ,                    
       GROUP_U8_1 ,                    
       GROUP_U8_2 ,                    
       GROUP_U8_3 ,                    
       GROUP_U8_4 ,                    
       GROUP_U8_5 ,                    
       GROUP_U8_6 ,                    
       GROUP_U8_7 ,                    
       GROUP_U8_8 ,                    
       GROUP_U8_9 ,                    
       GROUP_U8_10,                    
       GROUP_U8_11,                    
       GROUP_U8_12,                    
       GROUP_U8_13,                    
       GROUP_U8_14,                    
       GROUP_U8_15,                    
       GROUP_U8_16  
}GROUP;	   
/**********************************************/



/************SUBGROUP PIRIORITES******************/
typedef enum
{
       SUBGROUP_U8_0 ,                    
       SUBGROUP_U8_1 ,                    
       SUBGROUP_U8_2 ,                    
       SUBGROUP_U8_3 ,                    
       SUBGROUP_U8_4 ,                    
       SUBGROUP_U8_5 ,                    
       SUBGROUP_U8_6 ,                    
       SUBGROUP_U8_7 ,                    
       SUBGROUP_U8_8 ,                    
       SUBGROUP_U8_9 ,                    
       SUBGROUP_U8_10,                    
       SUBGROUP_U8_11,                    
       SUBGROUP_U8_12,                    
       SUBGROUP_U8_13,                    
       SUBGROUP_U8_14,                    
       SUBGROUP_U8_15,                    
       SUBGROUP_U8_16  
}SUBGROUP;

/***********************************************/



/***********VECTOR TABLE PIRIORITES*************/
typedef enum
{
	VECT_WWDG,
	VECT_PVD,
	VECT_TAMPER,
	VECT_RTC,
	VECT_FLASH,
	VECT_RCC,
	VECT_EXTI0,
	VECT_EXTI1,
	VECT_EXTI2,
	VECT_EXTI3,
	VECT_EXTI4,
	VECT_DMA1_Channel1,
	VECT_DMA1_Channel2,
	VECT_DMA1_Channel3,
	VECT_DMA1_Channel4,
	VECT_DMA1_Channel5,
	VECT_DMA1_Channel6,
	VECT_DMA1_Channel7,
	VECT_ADC1_2,
	VECT_CAN1_TX,
	VECT_CAN1_RX0,
	VECT_CAN1_RX1,
	VECT_CAN1_SCE,
	VECT_EXTI9_5,
	VECT_TIM1_BRK,
	VECT_TIM1_UP,
	VECT_TIM1_TRG,
	VECT_TIM1_CC,
	VECT_TIM2	,
	VECT_TIM3	,
	VECT_TIM4	,
	VECT_I2C1_EV,
	VECT_I2C1_ER,
	VECT_I2C2_EV,
	VECT_I2C2_ER,
	VECT_SPI1	,
	VECT_SPI2	,
	VECT_USART1	,
	VECT_USART2	,
	VECT_USART3	,
	VECT_EXTI15_10,
	VECT_RTCAlarm,
	VECT_OTG_FS_WKUP,
	VECT_TIM5=50,
	VECT_SPI3,
	VECT_UART4,
	VECT_UART5,
	VECT_TIM6,
	VECT_TIM7,
	VECT_DMA2_Channel1,
	VECT_DMA2_Channel2,
	VECT_DMA2_Channel3,
	VECT_DMA2_Channel4
}VECT_TABLE;
/**************************************************************/



























#endif
