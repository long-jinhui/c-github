#include<stdio.h>
int main()
{
	int i=1;
	int a=0;
	while(i<=100)
	{
		a=a+i;
		i++;    /*����д��i+1 ��дΪi=i+1*/ 
	}
	printf("a��ֵΪ%d\n",a);
	getchar();
	return 0;
 } 
