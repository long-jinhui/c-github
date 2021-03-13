#include<stdio.h>
void test(int n){
	if (n>2){
		test(n-1);
 	}
		printf("n=%d\n",n);
}
	int main()
	{
		test(4);/*输出2  3  4*/
		getchar(); 
	}
	/*调用一个函数就开辟一个独立的栈空间*/
	/*当一个函数返回后 该函数对应的 栈空间 销毁*/
	/*必须向退出递归条件逼近 否则就进入死循环*/ 
	 /*执行完毕 或 碰到 return 会返回调用函数的位置*/ 
