#include<stdio.h> 
int sb(){
	static int a=10;/*静态局部变量*/  /*只会初始化一次 只用一次10*/ 
	/*创建新的静态数据 放在静态布局存储区*/ /*以后的变化都从 静态数据 开始变化*/ 
	/*普通变量每次都会初始化*/ 
	printf("static a=%d\n",a);
	a++;
	printf("a++=%d\n\n\n\n\n",a);
}
int main(){
	sb(); 
	sb();
	getchar();
}

