#include <stdio.h>
#define SB 5  /*这玩意不占内存 不能赋新值*/ 
int main()
{
	int k,h;   
	h=33;
	k=SB+h;  /*占内存 能赋新值*/     /*SB不能等于其他数字   k可以变*/ 
	printf("%d",k);
	return 0; 
 } 
