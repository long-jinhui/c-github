#include<stdio.h>
int main()/*计算1+到100*/
{
	int i=1;
	int a=0;
	{
	  do
		{
			a=a+i;
			i++;    /*不能写成i+1 可写为i=i+1*/ 	
		}
	  while(i<=100);
	}
	printf("%d\n",a);
	getchar(); 
	return 0;
 } 
