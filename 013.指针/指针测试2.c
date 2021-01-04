#include<stdio.h> 
int main()
{
	int *p;
	int i=3;
	p=&i;   /*p保存了i的地址 p指向i*/  	/* p指向啥*p就是啥  */ 
	/* *p就是i  */ /*   p（指针）只能存放地址*/
	printf("i的值=%d,i的地址=%p\n",i,&i);
	printf("p地址=%p 存放的值（的地址）=%p  值= %d",&p,p,*p);
	getchar();
	return 0;
 } 
 /*   *p就是以 p的内容（i的地址）  为地址   的变量  */ /* *p就是i  */
