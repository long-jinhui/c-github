#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,z;   /*不能  int a=3/int=3（不能对类型赋值）*/   /*注意int z*/
	a=4;         
	b=3;
	if(a>b)  z=a;
	else z=b;
	printf("%d\n", z);
	system("PAUSE"); 
	return 0;
}
