#include<stdio.h>
int main()
{
 unsigned short a = -1;    //定义a为无符号短整型变量   不能存复数  -1转补码转二进制 再转“%d”格式输出 
	printf("%d\n", a);      //指定用有符号十进制数格式输出     
	return 0;
 } 
 
