/*************************************************/
/**            AUTHOR  : AHMED EHAB              */
/**            VERSION : V0.1                    */
/*************************************************/


#ifndef  _BIT_MATH_H_
#define  _BIT_MATH_H_

#define CLR_BIT(var,bit_num)      var=var&(~(1<<bit_num))       
#define SET_BIT(var,bit_num)      var=var|(1<<bit_num)				           	
#define TOG_BIT(var,bit_num)	  var^=(1<<bit_num)
#define GET_BIT(var,bit_num)      ((var>>bit_num)&1)


#endif