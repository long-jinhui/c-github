#include<stdio.h>
int*func(){
	int n=100;//�ֲ�����  �ᱻ���� Ȩ�ޱ�����  func��n���ܻᱻ��9�д��� 
	return &n;
}
int main(){
	int *p=func();//func����һ��ָ�� 
	int n;
	//printf("shhhhhhhhh"); 
	n=*p;
	printf("\nvalue=%d\n",n);
	getchar();
	return 0; 
}
