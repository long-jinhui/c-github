#include<stdio.h>
int a=200;/*����ȫ�ֱ���*/
/*�ֲ�������ʹ��ȫ�ֱ��� ��֮����*/ 
int skt_t1(){
	printf("\nfaker%d\n",a);//ȫ�ֱ��� 
}
int rng(){
	a=250;//���¶���ȫ�ֱ��� ֵ��Ϊ250 
	//int a=250  ����ֲ�����  16��ֵΪ200 
	printf("\nuzi%d\n",a);
}
int main(){
	printf("\n%d\n",a);//200
	skt_t1();//200
	rng();//250
	skt_t1();//250
	getchar();
}
