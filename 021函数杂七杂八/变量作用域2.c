#include<stdio.h>
int n=10;//全局变量 
int sb1()
{
	int n=20;//定义局部变量 
	printf("sb1为%d\n",n);
}
int sb2(int n)
{
	printf("sb2为%d\n",n); //n为形参  
}
int sb3()
{
	printf("sb3为%d\n",n);//n为全局变量 
}
int main(){
	int n=30;
	sb1();//20
	sb2(n);//30
	sb3();//10
	{
		int n=40;
		printf("代码块内%d\n",n);//40	
	}
	printf("主函数n为%d",n);//30
	getchar();
	return 0; 
}
/*n的值为就近原则 没有定义就走全局变量*/
