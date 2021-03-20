#include<stdio.h>
int main(){
	void check(int*);//函数声明 
	int*p,i;
	p=(int*)malloc(5*sizeof(int));//在堆区开辟5* 4(int)字节的临时空间   (int*)===将(*void)转为(int*) 赋给p 
	//p指向临时空间的第一个字节的地址 
	for(i=0;i<5;i++){  //5个int 
		scanf("%d",p+i);//i++ 等于 p加1 等于 p加一个int到下一个 int 
		//i等于0时 p指向地址 输入 等于给第一个int赋值 
	}
	check(p);//产生一个新的栈 
	free(p);//销毁堆区p指向的空间 不可再被使用 
	getchar();
	getchar();
	return 0;
}
void check(int*p){//p指向 堆区 临时空间的第一个字节的地址 
	int i=0;
	printf("\n不及格的有:");
	for(;i<5;i++)
	{
		if(p[i]<60)
		{
			printf("%d\n",p[i]);
		}
	}
	
}



