#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int a,b,z;  
	printf("输入两个整数：");
    scanf("%d   %d", &a, &b);   /*输入中间有一个空格 不能用  符号(吗？)  */
	if(a>b)  z=a;              //注意输入数字大小有限制 
	else z=b;
	printf("%d\n", z);
	system("PAUSE"); 
	return 0;
}
