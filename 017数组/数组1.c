#include<stdio.h>
int main()
{
	int aLen,i;
	double a[5]; 
	aLen= sizeof(a) / sizeof(double);  /*求数组个数*/  
	/*分子为数组占空间总大小 分母为a的类型(单个double)的大小*/  
	  /*方便写for循环 */
	printf("aLen=%d\n",aLen);
	for(i=0;i<aLen;i++)     
	{
		printf("输入一个小数");
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
