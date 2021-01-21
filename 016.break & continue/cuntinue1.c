#include<stdio.h>
int main()
    {
	int a=1;
	for(;a<=10;a++)
       {if(a%2==1)     /*表示 if[命题:(a/2有余数为真)]==if a/2有余数*/ 
       continue;     /*退回到a++*/
       printf("%d\n",a);
	   }
	   return 0;
	}
