#include<stdio.h>  /*ö�ٵı���*/
	enum DAY{MON=1,TUE,WED,THU,FRI,SAT,SUN}day; /*enum DAY ��ö��(����)����  day(ö��)���� */
	 /* (int) a === (enum DAY) day*/
	 /*ö�ٿ���˳��ֵ*/ 
int main()
{
  for(day=MON;day<=SUN;day++){
  	printf("ö��Ԫ��%d\n",day);/*1234567*/
  }
	getchar();
	return 0;
}
