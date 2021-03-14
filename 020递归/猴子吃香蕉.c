#include<stdio.h> 
int p(int day){
	if(day==10)/*第十天 设定终止值 否则会进入死循环*/
	{
		return 1;  /*返回值为1 下面直接调用*/ 
	}
	else {
	return (p(day+1)+1)*2; 
	}
}
void main()
{
	int num=p(1);/*一开始有几个香蕉*/ 
	printf("%d",num);
	getchar();
}
