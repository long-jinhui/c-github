#include<stdio.h>
int main()
{
	enum DAY{MON=1,TUE=2,WED=3,THU=4,FRI=5,SAT=6,SUN=7}; /* DAYΪö������ һ���������Ԫ��*/
	enum DAY day; /*enum DAY ��ö��(����)����  day(ö��)����    (int) a === (enum DAY) day*/
	day=WED;
	printf("%i",day);
	getchar();
	return 0;
}
