#include<stdio.h>
int main(){
	int SB=3;
	int var[]={10,50,70}; 
 	int i,*ptr;
 	ptr=var;//ptr指向var数组的首地址 
 	for(i=0;i<SB;i++){
 		printf("var[%d]地址=%p\n",i,ptr);
 		printf("储存值:var[%d]=%d",i,*ptr);
 		ptr++;//ptr存放值节加 一个单位 4字节(int)
 		printf("\nptr的地址%p",&ptr);//求ptr的地址 
 		printf("\nvar的地址%p\n\n\n",&var);//求var的地址 
	}
 	getchar();
 	return 0;
   	}
