#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;                   //����float ,double, long double   ���� ���� ��� ҲҪ���ű� 
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
