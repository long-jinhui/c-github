#include<stdio.h>
int main()
{
	enum DAY{MON=1,TUE=2,WED=3,THU=4,FRI=5,SAT=6,SUN=7}; /* DAY为枚举类型 一般包含较少元素*/
	enum DAY day; /*enum DAY 是枚举(数据)类型  day(枚举)变量    (int) a === (enum DAY) day*/
	day=WED;
	printf("%i",day);
	getchar();
	return 0;
}
