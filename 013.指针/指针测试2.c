#include<stdio.h> 
int main()
{
	int *p;
	int i=3;
	p=&i;   /*p������i�ĵ�ַ pָ��i*/
	printf("i��ֵ=%d,i�ĵ�ַ=%p\n",i,&i);
	printf("ptr��ַ=%p ��ŵ�ֵ���ĵ�ַ��=%p  ֵ= %p",&p,p,*p);
	getchar();
	return 0;
 } 
