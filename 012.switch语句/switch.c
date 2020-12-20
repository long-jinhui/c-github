#include<stdio.h>
#include<stdlib.h> 
int main()
{
	char V;
	scanf("%c",&V);
	switch(V)                                        /*暂时不知道有什么格式 狗日的学校又不教 我也懒得查（整数类型或字符型？？？{大概}）*/               
	{
		case 'A' : printf("你的成绩:你真棒\n");break;
		case 'B' : printf("你的成绩:还不错\n");break;                     /*注意 镶嵌 格式*/
		case 'C' : printf("你的成绩:继续努力\n");break;                    /*结尾注意break   使流程直接转到switch语句末尾*/
		case 'D' : printf("你的成绩:你就是个垃圾\n");break;               /*case顺序不影响输出*/  /*case量必须不同 否则会有冲突*/ 
		default  : printf("凡事想想自己配不配\n");                       /*如果没有default 流程转到switch语句下一个语句！！！！！！！！*/ 
	}
	system("pause");
	return 0;
 } 
