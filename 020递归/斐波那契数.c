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
	printf("����һ������:"); 
	scanf("%d",&b);
	int a=fbn(b);
	printf("��Ӧ쳲�������Ϊ:%d",a);
	getchar();
	getchar();
} 
