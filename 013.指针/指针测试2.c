#include<stdio.h> 
int main()
{
	int *p;
	int i=3;
	p=&i;   /*p������i�ĵ�ַ pָ��i*/  	/* pָ��ɶ*p����ɶ  */ 
	/* *p����i  */ /*   p��ָ�룩ֻ�ܴ�ŵ�ַ*/
	printf("i��ֵ=%d,i�ĵ�ַ=%p\n",i,&i);
	printf("p��ַ=%p ��ŵ�ֵ���ĵ�ַ��=%p  ֵ= %d",&p,p,*p);
	getchar();
	return 0;
 } 
 /*   *p������ p�����ݣ�i�ĵ�ַ��  Ϊ��ַ   �ı���  */ /* *p����i  */
