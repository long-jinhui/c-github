#include<stdio.h> 
int main()
{
	int a=1;
	int * ptr=&a;  /*���� ptr Ϊ int ������  ����Ϊptr*/ /*ptrֻ�ܴ��int���ͱ����ĵ�ַ*/ 
	printf("a��ֵ=%d,a�ĵ�ַ=%p\n",a,&a);
	printf("ptr��ַ=%p ��ŵ�ֵ���ĵ�ַ��=%p  ֵ= %d",&ptr,ptr,*ptr+1);
	getchar();            /*�������˳�*/ 
	return 0;
 } 
