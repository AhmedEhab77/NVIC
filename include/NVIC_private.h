/*************************************************/
/**               AUTHOR : AHMED EHAB           **/                        
/**               VERSION : V0.1                **/
/*************************************************/

#ifndef   _NVIC_PRIVATE_H_
#define   _NVIC_PRIVATE_H_

   
 #define   BASE_ADRESS_NVIC      (0xE000E100)
	
   /*******************************************/
#define    NVIC_ISER0          *( (volatile u32*) (BASE_ADRESS_NVIC+0x000) )
#define    NVIC_ISER1          *( (volatile u32*) (BASE_ADRESS_NVIC+0x004) )
   /*******************************************/
#define    NVIC_ICER0          *( (volatile u32*) (BASE_ADRESS_NVIC+0x080) )
#define    NVIC_ICER1          *( (volatile u32*) (BASE_ADRESS_NVIC+0x084) )
   /*******************************************/
#define    NVIC_ISPR0          *( (volatile u32*) (BASE_ADRESS_NVIC+0x100) )
#define    NVIC_ISPR1          *( (volatile u32*) (BASE_ADRESS_NVIC+0x104) )
   /*******************************************/
#define    NVIC_ICPR0          *( (volatile u32*) (BASE_ADRESS_NVIC+0x180) )
#define    NVIC_ICPR1          *( (volatile u32*) (BASE_ADRESS_NVIC+0x184) )
   /*******************************************/
#define    NVIC_IAPR0          *( (volatile u32*) (BASE_ADRESS_NVIC+0x200) )
#define    NVIC_IAPR1          *( (volatile u32*) (BASE_ADRESS_NVIC+0x204) )


#define    NVIC_IPR             ((volatile u8*)BASE_ADRESS_NVIC+0x300 ) 




/******************	NUMBER OF GROUPS AND SUBGROUPS*****************/
#define              GROUPS_16_SUB_0                          0b011
		            						                  
#define              GROUPS_8_SUB_2                           0b100
		            						                  
#define              GROUPS_4_SUB_4                           0b101
		            						                  
#define              GROUPS_2_SUB_8                           0b110
		            						                  
#define              GROUPS_0_SUB_16                          0b111
/*****************************************************************/





#endif
