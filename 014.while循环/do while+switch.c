#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int a,b=0;
	char g;
	printf("输入A为while循环\n输入b为do while循环\n输入C结束\n请输入:"); 
	scanf("%c",&g);
	switch(g)
	{
	case'A':  /*while循环*/ 
		{
			printf("输入a的值:"); 
        	scanf("%i",&a);
	  		while(a<=3)
			{
				b=b+a;
				a++;
			}
				printf("b=%d\n\n",b);break;
		}
	case'B':              /*do while 循环*/
		{
			printf("输入a的值:"); 
			scanf("%d",&a);
			do
			{
				b=b+a;
				a++;
			}	
			while(a<=3);
				printf("b=%d\n\n",b);break;
		}
	case'C':
	printf("GG\n\n");
	return 0;
	default:printf("错误\n\n\n");  /*这句看情况写*/
	}
	system("pause");
	return 0;
}

