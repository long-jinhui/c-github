#include<stdio.h>
#include<stdlib.h> 
int *SB(){
	//��̬���� 
	static int arr[10];//staticʹarr�ھ�̬���������� �ռ䲻�ᱻ����   Ȩ�޻��� 
	int i=0;
	for(i=0;i<10;i++){
		arr[i]=rand();//����α����� 
	} 
	return arr;
}
void main(){
	int*p;
	int i;
	p=SB();//��SB�����ɵ�������׵�ַ  ��һ��Ԫ�صĵ�ַ 
	for(i=0;i<10;i++){
		printf("\n%d",*(p+i));
		
	}
	
	getchar();
}
