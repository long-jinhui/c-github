#include<stdio.h>
int main()/*����1+��100*/
{
	int i=1;
	int a=0;
	{
	  do
		{
			a=a+i;
			i++;    /*����д��i+1 ��дΪi=i+1*/ 	
		}
	  while(i<=100);
	}
	printf("%d\n",a);
	getchar(); 
	return 0;
 } 
