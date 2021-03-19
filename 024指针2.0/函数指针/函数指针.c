#include<stdio.h>
//接收两个int参数 
//返回较大的数 
int max (int a,int b){ //返回值为int 形参为int 
	return a>b? a:b;
}
int main(){
	int x,y,maxV;
	
	//函数指针名字为(*pmax) 
	//第一个int表示指向函数是返 回int类型 的函数 
	// (int,int)表示函数指针指向的函数的形参是 接收两个int类型
	int(*pmax)(int,int)=max;// 	int(*pmax)(int x,int y)=max也行 
	//pmax指向max
	 
	printf("输入两个数字:");
	scanf("%d %d",&x,&y);
	 maxV=(*pmax)(x,y);
	 //(*pmax)取到函数首地址 (x,y)执行函数 
	 
	 printf("最大的数字为%d pmax存的地址%p pmax本身的地址%p",maxV,pmax,&pmax);
	 //pmax存放的地址是max的首地址
	 //(*pmax)取到max首地址  (10,20)传入实参 
	 getchar();
	 return 0; 
} 

