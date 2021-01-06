#include<stdio.h>
int main()
{
	int a;
	scanf("%i",&a);
	if((a%4==0 && a%100!=0)||a%400==0)
	/* !=代表不等于   if语句两个运算符加 0/1 判定逻辑*/
		printf("闰年"); 
	else
		printf("非闰年"); 
    
    return main();
}
