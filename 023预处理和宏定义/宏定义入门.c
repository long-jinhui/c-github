#include<stdio.h>
#define SB (n*2*n*n) /*����� ����ΪSB*/  /*������*/  /*������Ϊ�ַ���*/ 
/*Ԥ����ʱ�����ᱨ�� �ں�չ��ʱ����(���к�ʱ)*/ 
/* !!!!!������ �ֺ�; �ͻ�һ���滻 ����ʱ�ֺ�Ҳ������ȥ*/
/*����д�ں�������*/ 
#define NMSL (SB*2*SB) /*�궨����������*/
#define UINT unsigned int  /*�궨�� �ɱ�ʾ��������*/
void main()
{
	int a,n,q;
	printf("����һ������:");
	scanf("%d",&n);
	a=n*SB*3;
	printf("\nSB���ý��Ϊ%d\n",a); /*��������������Ͳ�������*/

	q=NMSL*3;
	printf("\nq����%d\n",q);

	#undef SB  //ȡ���궨��  SB�����¶���
	int SB=3; 
	int lj; 
	lj=SB+1;
	printf("\nlj����%d\n",lj);
	
	UINT g=8,h=9;  /*���滻unsigned int*/ 
	printf("\ng=%d h=%d",g,h);
	getchar();
	getchar();
}
