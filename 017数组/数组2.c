#include<stdio.h>   
int main()
{
	int aLen;
	int a[5]={4,5,8,9,6};  /*a[0] a[1] a[2] a[3] a[4] */ /*��ǰ��ֵ*/
	printf("sizeof(a)=%d\n",sizeof(a)); /*�����ܴ�С20   5*4 */
	printf("sizeof(int)=%d\n",sizeof(int)); /*����doubleռ���ֽ�����С*/ 
	aLen=sizeof(a) / sizeof(int);  
	/*����Ϊ����ռ�ռ��ܴ�С ��ĸΪa������(����int)�Ĵ�С*/  
	/*��ĸע�������������ͬ*/ 
	printf("aLen=%d\n",aLen); /*���������*/  
	printf("��=%d",a[0]+a[1]+a[2]+a[3]+a[4]);
	getchar();
	return 0;
}

