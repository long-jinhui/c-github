#include<stdio.h>
#define SB(a,b)/*宏名和形参列表间不能有空格*/(a>b) ? a:b /*三元运算符    (条件) ？执行语句1:执行语句2   条件真反回值一*/ 
/*SB 为带参数的宏 (a,b)为形参*/
/*(a>b) ? a:b是带参数的宏对应的字符串 该字符串可以使用形参*/ 
/*字符串内的形参注意带括号*/
/*宏不占内存 函数占内存*/ 
/*宏是替换 函数是调用*/ 
void main()
{
	int max,x,y;/*实参必须指明数据类型*/ 
	printf("输入两个数字:");
	scanf("%d  %d",&x,&y);
  	max=SB(x,y);/*调用带参数的宏定义*/
	printf("\nmax=%d\n",max); 
	getchar();
	getchar(); 
}
