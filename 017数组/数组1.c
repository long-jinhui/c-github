#include<stdio.h>
int main()
{
	int aLen,i;
	double a[5]; 
	aLen= sizeof(a) / sizeof(double);  /*���������*/  
	/*����Ϊ����ռ�ռ��ܴ�С ��ĸΪa������(����double)�Ĵ�С*/  
	  /*����дforѭ�� */
	printf("aLen=%d\n",aLen);
	for(i=0;i<aLen;i++)     
	{
		printf("����һ��С��");
		scanf("%lf",&a[i]);
	 } 
	printf("\n===========================================================================================\n");
		for(i=0;i<aLen;i++)
	{
		printf("a[%d]=%.2f ",i,a[i]);
	 } 
	 getchar();
	 getchar();
} 
