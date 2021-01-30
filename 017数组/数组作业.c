#include<stdio.h>
int main()
{   
	int i=0;
	char a[26];
	a[0]='A';
	for(;i<=25;i++)
	{   
		printf("%d",i);
		a[i]='A'+i;  
		printf("%c\n",a[i]);
	}
	getchar();
}


