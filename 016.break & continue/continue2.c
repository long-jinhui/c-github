#include<stdio.h>
int main()
    {
	int a=10;
	for(;a<=20;a++)
	   	{if(a%2==0)  /*��ʾ [a=10 ��������:(a/2������Ϊ��)]==a/2û������*/ 
		{continue;    /*�˻ص�a++*/
       	printf("%d\n",a); } 
		 else
		 printf("nmsl\n"); } 
		 return 0;
	} 
