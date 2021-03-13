#include<stdio.h>
int test(int a){
	if(a==1){
		return 3;
	}
	else {
	return 2*test(a-1)+1;
	}
}
int main()
{
	int d;
	scanf("%d",&d);
	int b=test(d);
	printf("%d",b);
	getchar();
	getchar();
}
