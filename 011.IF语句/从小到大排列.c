#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c,t;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
	t=a;a=b;b=t;                               //中间量永远在前面 
	}
	if(a>c)
	{
	t=a;a=c;c=t;
	}
	if(b>c)
	{
	t=b;b=c;c=t;
	}
	printf("%7.3f\n%7.3f\n%7.3f",a,b,c);
	system("pause");
	return 0;
}
