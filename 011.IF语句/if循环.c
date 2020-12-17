#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;                   //可以float ,double, long double   下面 输入 输出 也要跟着变 
	scanf("%d%d",&a,&b);
	if(a>b)
	{	c=a;
		a=b;
	 	b=c;
	}
	printf("%d\n%d",a,b);
	system("pause");
	return 0;
}
