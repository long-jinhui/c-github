#include<stdio.h>
int main()
{   
	int i=0;
	char a[26];   /*定义数组类型为字母*/
	for(;i<=25;i++)
	{
		//printf("%d",i);
		a[i]='A'+i;  
		printf("a[%d]=%c\n",i,a[i]);
		//printf("%c\n",a[i]);
	}
	getchar();
}


