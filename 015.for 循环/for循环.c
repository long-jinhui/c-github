#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a,b=0;
	scanf("%d",&a);
      for(; a<=100,printf("sb");a++)  /*for������ź���ĵ�һ��;Ϊִ�����*/
	{                       /*Ҫִ���������������Ҫ�Ӵ�����*/ 
	  	  b=b+a;           /*�˴������� {} ��ֻ ��� һ��b��ֵ */ 
      printf("b��ֵ�� %i\n", b); /*����b=b+a; ��һֱִ��*/ 
	}
system("pause");
	return 0; 
}
