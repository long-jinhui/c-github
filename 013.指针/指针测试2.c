#include<stdio.h> 
int main()
{
	int *p;
	int i=3;
	p=&i;   /*p保存了i的地址 p指向i*/
	printf("i的值=%d,i的地址=%p\n",i,&i);
	printf("ptr地址=%p 存放的值（的地址）=%p  值= %p",&p,p,*p);
	getchar();
	return 0;
 } 
