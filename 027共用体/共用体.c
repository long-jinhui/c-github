#include<stdio.h>
union data{//������ռ�ռ��С������ԱΪ׼ 
	int n;//4�ֽ� 
	char ch;//1�ֽ� 
	short m;//2�ֽ� 
};
int main(){
	union data a;//����һ����������� 
	printf("%d,%d\n",sizeof(a),sizeof(union data));
	a.n=0x40;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.ch='9';
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.m=0x2059;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.n=0x3E25AD54;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	getchar();
	//�ֽ����ӵ�λ��ʼ��� 
}
