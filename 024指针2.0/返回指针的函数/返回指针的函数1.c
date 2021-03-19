#include<stdio.h>
int*func(){
	int n=100;//局部变量  会被销毁 权限被撤销  func中n可能会被第9行代替 
	return &n;
}
int main(){
	int *p=func();//func返回一个指针 
	int n;
	//printf("shhhhhhhhh"); 
	n=*p;
	printf("\nvalue=%d\n",n);
	getchar();
	return 0; 
}
