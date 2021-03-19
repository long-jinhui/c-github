#include<stdio.h>//返回指针的函数 
#include<string.h>
char*SB(char*sb1,char*sb2){//函数返回char*(指针) 
	printf("sb1的长度为%d  sb2的长度为%d",strlen(sb1),strlen(sb2));//strlen 表示 字符串长度 
	if(strlen(sb1)>=strlen(sb2)){
		return sb1; 
	}else{
		return sb2;
	}
}
int main()
{
	char sb1[5],sb2[5],*sb;//sb指向一个字符串 
	printf("\n请输入第一个字符串:");
	gets(sb1);
	printf("\n请输入第二个字符串:");
	gets(sb2);
	sb=SB(sb1,sb2);
	printf("\nLonger str=%s\n",sb);
	getchar();
	getchar();
	return 0;
}
