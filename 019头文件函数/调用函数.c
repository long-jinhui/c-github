#include<stdio.h>
/*�Զ��庯��*/
/*void �޷���ֵ*/ 
/*�β��б�(int a,int b)*/
/*����������Ҫ��ͬ���β��б�*/ 
void test(int a,int b)/*������Ϊ�β�*/ 
{
	int e;
	if(a>b){a++;e=a;/* a++ ���� a=a+1 */ 
	printf("a>b���Ϊ%d\n\n",e);
	}
	else{a--;e=a;
	printf("a<b���Ϊ%d\n\n",e);
	}
}

int main()
{
	int c,d;
	printf("����a:"); 
	scanf("%d",&c);
	printf("����b:"); 
	scanf("%d",&d);
	test(c,d);/*���ú���*/   /*������Ϊʵ��*/ 
	
	int e=6,f=7;
	printf("��������Ϊ");
	test(e,f);/*���ú���*/
	
	int g=8,h=5;
	printf("���������Ϊ");
	test(g,h);/*���ú���*/
	
	getchar();
	getchar();
	return 0;
}
