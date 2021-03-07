#include<stdio.h>
int main()
{
char c[20]={'t','o','m'};/*赋给元素个数小于该数组长度 自动添加 '\0'*/
	char str1[3]={'a','b','c'};
	   char str2[]={'a','b','c','\0'};
	      char str3[]={'j','a','c','k'};
	      printf("str3=%s\n",str3);/*也可能是乱码*/
	   printf("str2=%s\n",str2);
	printf("str1=%s\n",str1); 
printf("c=%s",c); /*输出字符串  %s在C语言中代表 字符串型 格式符。*/ 
/*c语言中没有专门的 字符串变量(string) 没有string类型 */
/*通常用字符数组存放字符串*/ 
} 
/*1 '\0'为字符串的终止字符 ASCII码为空字符  单独占一个空间！！！*/
/*2  str的abc后面 可能 跟乱码 因为没有'\0' 不知道'c'后面是什么*/ 
/*3  可以人为添加\0   或者增大数字*/ 
