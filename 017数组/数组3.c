#include<stdio.h>
int main()
{
	int aLen,i;
	double a[]={2,3,4}; 
	printf("sizeof(a)=%d\n",sizeof(a)); 
	printf("sizeof(double)=%d\n",sizeof(double));
	aLen=sizeof(a) / sizeof(double);  
	printf("aLen=%d\n",aLen);  /*求数组个数*/  
	printf("和=%.0f",a[0]+a[1]+a[2]);
	getchar();
	return 0;
}

