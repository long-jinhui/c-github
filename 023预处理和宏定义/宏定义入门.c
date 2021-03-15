#include<stdio.h>
#define SB (n*2*n*n) /*定义宏 宏名为SB*/  /*带括号*/  /*括号内为字符串*/ 
/*预处理时并不会报错 在宏展开时报错(运行宏时)*/ 
/* !!!!!若加了 分号; 就会一起被替换 调用时分号也跟着下去*/
/*必须写在函数外面*/ 
#define NMSL (SB*2*SB) /*宏定义允许镶套*/
#define UINT unsigned int  /*宏定义 可表示数据类型*/
void main()
{
	int a,n,q;
	printf("输入一个数字:");
	scanf("%d",&n);
	a=n*SB*3;
	printf("\nSB引用结果为%d\n",a); /*宏名在引号里面就不被引用*/

	q=NMSL*3;
	printf("\nq等于%d\n",q);

	#undef SB  //取消宏定义  SB可重新定义
	int SB=3; 
	int lj; 
	lj=SB+1;
	printf("\nlj等于%d\n",lj);
	
	UINT g=8,h=9;  /*宏替换unsigned int*/ 
	printf("\ng=%d h=%d",g,h);
	getchar();
	getchar();
}
