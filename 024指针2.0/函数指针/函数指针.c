#include<stdio.h>
//��������int���� 
//���ؽϴ���� 
int max (int a,int b){ //����ֵΪint �β�Ϊint 
	return a>b? a:b;
}
int main(){
	int x,y,maxV;
	
	//����ָ������Ϊ(*pmax) 
	//��һ��int��ʾָ�����Ƿ� ��int���� �ĺ��� 
	// (int,int)��ʾ����ָ��ָ��ĺ������β��� ��������int����
	int(*pmax)(int,int)=max;// 	int(*pmax)(int x,int y)=maxҲ�� 
	//pmaxָ��max
	 
	printf("������������:");
	scanf("%d %d",&x,&y);
	 maxV=(*pmax)(x,y);
	 //(*pmax)ȡ�������׵�ַ (x,y)ִ�к��� 
	 
	 printf("��������Ϊ%d pmax��ĵ�ַ%p pmax����ĵ�ַ%p",maxV,pmax,&pmax);
	 //pmax��ŵĵ�ַ��max���׵�ַ
	 //(*pmax)ȡ��max�׵�ַ  (10,20)����ʵ�� 
	 getchar();
	 return 0; 
} 

