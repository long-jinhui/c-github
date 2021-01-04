#include<stdio.h> 
int main()
{
	int a=1;
	int * ptr=&a;  /*定义 ptr 为 int * 的类型（存放int变量地址的类型）  名称为ptr*/
	 /* int* 类型 表示ptr只能存放int类型变量的地址*/ 
	 /*   ptr只能存放地址*/
	printf("a的值=%d,a的地址=%p\n",a,&a);
	printf("ptr地址=%p 存放的值（的地址）=%p  值= %d",&ptr,ptr,*ptr);
	getchar();
	return 0;
 } /*   *ptr就是以 ptr的内容（i的地址）  为地址的变量  */ 
