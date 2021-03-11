#include<stdio.h>  /*枚举的遍历*/
	enum DAY{MON=1,TUE,WED,THU,FRI,SAT,SUN}day; /*enum DAY 是枚举(数据)类型  day(枚举)变量 */
	 /* (int) a === (enum DAY) day*/
	 /*枚举可以顺序赋值*/ 
int main()
{
  for(day=MON;day<=SUN;day++){
  	printf("枚举元素%d\n",day);/*1234567*/
  }
	getchar();
	return 0;
}
