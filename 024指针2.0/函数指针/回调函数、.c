#include<stdio.h>
#include<stdlib.h>
//fΪ����ָ�� 
//���Խ��� ����һ��int ���βεĺ��� fucking 
//f��SB����   �䵱�ص�����
void SB(int *array,int arraySize,int (*f)(void)/*fΪ����ָ��*/){
	int i=0;
	for(;i<arraySize;i++){
		array[i]=f();//==========array[i]=(*f)(); 
		//ͨ��ָ�� ���ص��� fucking ����rand ��ֵ��array
	}
}

int fucking(void){ //���β� 
	return rand();//rand ����һ��α����� 
}
int main(void){
	int shuzhu[10],i;
	
	//����SB shuzhu��SB��Ӧ 
	//���뺯���� fucking(��ַ) ��Ҫ����ָ�����  ��Ӧ (*f)(void)
	SB(shuzhu,10,fucking);
	
	// �����ֵ������� 
	for(i=0;i<10;i++){
		printf("%d\n",shuzhu);
	} 
	getchar();
	return 0;
}
