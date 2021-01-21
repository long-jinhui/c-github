#include<stdio.h>
int main()
    {
	int a=10;
	for(;a<=20;a++)
	   	{if(a%2==0)  /*表示 [a=10 满足命题:(a/2有余数为假)]==a/2没有余数*/ 
		{continue;    /*退回到a++*/
       	printf("%d\n",a); } 
		 else
		 printf("nmsl\n"); } 
		 return 0;
	} 
