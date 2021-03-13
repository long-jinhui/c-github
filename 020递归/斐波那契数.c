#include<stdio.h>
int fbn(int n)
{
	if(n==1||n==2){
	return 1;
	}
	else{
	return fbn(n-1)+fbn(n-2); 
	} 
}
void main()
{
	int b;
	printf("输入一个整数:"); 
	scanf("%d",&b);
	int a=fbn(b);
	printf("对应斐波那契数为:%d",a);
	getchar();
	getchar();
} 
