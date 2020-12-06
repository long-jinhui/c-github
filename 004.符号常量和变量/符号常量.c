#include <stdio.h>
#define SB 5  /*这玩意不占内存 不能赋新值*/ 
int main()
{
	int k;   
	
	k=SB;
	printf("%d",k);
	return 0; 
 } 
