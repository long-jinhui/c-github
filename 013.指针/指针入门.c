#include<stdio.h> 
int main()
{
	int a=1;
	int * ptr=&a;  /*定义 ptr 为 int 的类型  名称为ptr*/ /*ptr只能存放int类型变量的地址*/ 
	printf("a的值=%d,a的地址=%p\n",a,&a);
	printf("ptr地址=%p 存放的值（的地址）=%p  值= %d",&ptr,ptr,*ptr+1);
	getchar();            /*按两次退出*/ 
	return 0;
 } 
