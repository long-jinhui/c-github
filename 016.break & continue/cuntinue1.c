#include<stdio.h>
int main()
    {
	int a=1;
	for(;a<=10;a++)
       {if(a%2==1)     /*��ʾ if[����:(a/2������Ϊ��)]==if a/2������*/ 
       continue;     /*�˻ص�a++*/
       printf("%d\n",a);
	   }
	   return 0;
	}
