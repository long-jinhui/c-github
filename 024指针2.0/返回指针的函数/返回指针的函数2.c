#include<stdio.h>
#include<stdlib.h> 
int *SB(){
	//静态变量 
	static int arr[10];//static使arr在静态数据区分配 空间不会被销毁   权限还在 
	int i=0;
	for(i=0;i<10;i++){
		arr[i]=rand();//产生伪随机数 
	} 
	return arr;
}
void main(){
	int*p;
	int i;
	p=SB();//在SB中生成的数组的首地址  第一个元素的地址 
	for(i=0;i<10;i++){
		printf("\n%d",*(p+i));
		
	}
	
	getchar();
}
