#include<stdio.h>
void test(int*p);
 int main(){
	int i,num=90;
	int *p=&num;//��num�ĵ�ַ��ֵ��p
	test(&num);
	printf("\nmain()�е�num=%d",num);
	test(p);
	printf("\nmain()�е�num=%d",num);	
getchar();
return 0;        
}
void test(int*p){
*p+=1; 
}
