#include<stdio.h>
int n=10;//ȫ�ֱ��� 
int sb1()
{
	int n=20;//����ֲ����� 
	printf("sb1Ϊ%d\n",n);
}
int sb2(int n)
{
	printf("sb2Ϊ%d\n",n); //nΪ�β�  
}
int sb3()
{
	printf("sb3Ϊ%d\n",n);//nΪȫ�ֱ��� 
}
int main(){
	int n=30;
	sb1();//20
	sb2(n);//30
	sb3();//10
	{
		int n=40;
		printf("�������%d\n",n);//40	
	}
	printf("������nΪ%d",n);//30
	getchar();
	return 0; 
}
/*n��ֵΪ�ͽ�ԭ�� û�ж������ȫ�ֱ���*/
