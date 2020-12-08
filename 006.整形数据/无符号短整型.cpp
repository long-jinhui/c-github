#include<stdio.h>
int main()
{                                  //因为无符号和有符号整数在内存中都是用补码形式存储的      //而要存 负数（-10）应先将其转换成补码 
	unsigned short a = 1 ;    //定义a为无符号短整型变量 
	printf("%u\n",a);           //指定用无符号十进制数格式输出 
	return 0;                   /*用%u打印无符号类型                    用%d会把无符号类型转换成有符号类型输出   用%d就会把unsigned 转换成signed再输出*/
	    
 } //注意unsigned short取值范围 0~65535 
 
