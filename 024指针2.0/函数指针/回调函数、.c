#include<stdio.h>
#include<stdlib.h>
//f为函数指针 
//可以接收 返回一个int 无形参的函数 fucking 
//f被SB调用   充当回调函数
void SB(int *array,int arraySize,int (*f)(void)/*f为函数指针*/){
	int i=0;
	for(;i<arraySize;i++){
		array[i]=f();//==========array[i]=(*f)(); 
		//通过指针 往回调用 fucking 返回rand 赋值给array
	}
}

int fucking(void){ //无形参 
	return rand();//rand 返回一个伪随机数 
}
int main(void){
	int shuzhu[10],i;
	
	//调用SB shuzhu和SB对应 
	//传入函数名 fucking(地址) 需要函数指针接受  对应 (*f)(void)
	SB(shuzhu,10,fucking);
	
	// 输出赋值后的数组 
	for(i=0;i<10;i++){
		printf("%d\n",shuzhu);
	} 
	getchar();
	return 0;
}
