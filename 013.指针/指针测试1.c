#include<stdio.h> 
int main()
{
	int a=1;
	int * ptr=&a;  /*���� ptr Ϊ int * �����ͣ����int������ַ�����ͣ�  ����Ϊptr*/
	 /* int* ���� ��ʾptrֻ�ܴ��int���ͱ����ĵ�ַ*/ 
	 /*   ptrֻ�ܴ�ŵ�ַ*/
	printf("a��ֵ=%d,a�ĵ�ַ=%p\n",a,&a);
	printf("ptr��ַ=%p ��ŵ�ֵ���ĵ�ַ��=%p  ֵ= %d",&ptr,ptr,*ptr);
	getchar();
	return 0;
 } /*   *ptr������ ptr�����ݣ�i�ĵ�ַ��  Ϊ��ַ�ı���  */ 
