#include<stdio.h>
void test(int*p);
 int main(){
	int i,num=90;
	int *p=&num;//将num的地址赋值给p
	test(&num);
	printf("\nmain()中的num=%d",num);
	test(p);
	printf("\nmain()中的num=%d",num);	
getchar();
return 0;        
}
void test(int*p){
*p+=1; 
}
