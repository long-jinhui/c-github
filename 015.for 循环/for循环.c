#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a,b=0;
	scanf("%d",&a);
      for(; a<=100,printf("sb");a++)  /*for语句括号后面的第一个;为执行语句*/
	{                       /*要执行两个或以上语句要加大括号*/ 
	  	  b=b+a;           /*此处若不加 {} 则只 输出 一次b的值 */ 
      printf("b的值： %i\n", b); /*但是b=b+a; 会一直执行*/ 
	}
system("pause");
	return 0; 
}
