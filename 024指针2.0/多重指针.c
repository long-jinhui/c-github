#include<stdio.h>
 int main(){
	int var=3000;
	int *ptr;//一级指针 
	int **pptr;//二级指针 
	int ***ppptr;//三级指针
	 
	ptr=&var;//var变量的地址赋值给ptr 
	
	pptr=&ptr; //ptr本身的地址赋值给pptr 
	
	ppptr=&pptr; //pptr本身的地址赋值给ppptr 
	
	printf("var的地址=%p  var等于=%d\n",&var,var);
	printf("ptr本身的地址=%p ptr存放的地址=%p *ptr=%d\n",&ptr,ptr,*ptr);
	printf("pptr的地址=%p pptr存放的地址=%p  **pptr=%d\n",&pptr,pptr,**pptr);
	printf("ppptr的地址=%p ppptr存放的地址=%p  ***ppptr=%d\n",&ppptr,ppptr,***ppptr);	
getchar();
return 0;
}
