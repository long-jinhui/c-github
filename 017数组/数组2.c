#include<stdio.h>   
int main()
{
	int aLen;
	int a[5]={4,5,8,9,6};  /*a[0] a[1] a[2] a[3] a[4] */ /*提前赋值*/
	printf("sizeof(a)=%d\n",sizeof(a)); /*数组总大小20   5*4 */
	printf("sizeof(int)=%d\n",sizeof(int)); /*单个double占用字节数大小*/ 
	aLen=sizeof(a) / sizeof(int);  
	/*分子为数组占空间总大小 分母为a的类型(单个int)的大小*/  
	/*分母注意跟数组类型相同*/ 
	printf("aLen=%d\n",aLen); /*求数组个数*/  
	printf("和=%d",a[0]+a[1]+a[2]+a[3]+a[4]);
	getchar();
	return 0;
}

