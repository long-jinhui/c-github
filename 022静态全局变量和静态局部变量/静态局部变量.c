#include<stdio.h> 
int sb(){
	static int a=10;/*��̬�ֲ�����*/  /*ֻ���ʼ��һ�� ֻ��һ��10*/ 
	/*�����µľ�̬���� ���ھ�̬���ִ洢��*/ /*�Ժ�ı仯���� ��̬���� ��ʼ�仯*/ 
	/*��ͨ����ÿ�ζ����ʼ��*/ 
	printf("static a=%d\n",a);
	a++;
	printf("a++=%d\n\n\n\n\n",a);
}
int main(){
	sb(); 
	sb();
	getchar();
}

