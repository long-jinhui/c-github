#include<stdio.h>
int main()
{
	int i=1;
	int a=0;
	while(i<=100)
	{
		a=a+i;
		i++;    /*不能写成i+1 可写为i=i+1*/ 
	}
	printf("a的值为%d\n",a);
	getchar();
	return 0;
 } 
