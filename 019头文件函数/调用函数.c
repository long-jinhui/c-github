#include<stdio.h>
/*自定义函数*/
/*void 无返回值*/ 
/*形参列表(int a,int b)*/
/*函数变量名要等同于形参列表*/ 
void test(int a,int b)/*括号内为形参*/ 
{
	int e;
	if(a>b){a++;e=a;/* a++ 等于 a=a+1 */ 
	printf("a>b结果为%d\n\n",e);
	}
	else{a--;e=a;
	printf("a<b结果为%d\n\n",e);
	}
}

int main()
{
	int c,d;
	printf("输入a:"); 
	scanf("%d",&c);
	printf("输入b:"); 
	scanf("%d",&d);
	test(c,d);/*调用函数*/   /*括号内为实参*/ 
	
	int e=6,f=7;
	printf("任务二结果为");
	test(e,f);/*调用函数*/
	
	int g=8,h=5;
	printf("任务三结果为");
	test(g,h);/*调用函数*/
	
	getchar();
	getchar();
	return 0;
}
