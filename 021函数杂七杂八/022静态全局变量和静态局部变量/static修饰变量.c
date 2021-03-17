#include<stdio.h> 
int main(){
	static int n;/*静态局部变量 默认初始化为0*/
	printf("%d",n);
	getchar(); 
}
