#include<stdio.h>
#include<string.h>
int main()
{   
	int i=0;
 	char tesk[]={"hello"}; /*后面跟 \0*/ 
 	int len=strlen(tesk);
	printf("tesk=%s\n",tesk);
	printf("len=%d\n",len);
	printf("第三个字符为%c\n",tesk[2]);
	for(;i<5;i++)
		{
			printf("%c\n",tesk[i]);
		}
}


