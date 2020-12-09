#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c='?';                    //字符变量属于整形 可以singed/unsigned           /*有符号-128~127    无符号0~255*/ 
	printf("%d   %c\n",c,c);      //  ?的 ASCⅡ 代码为63    系统把63赋给c（%d）   (%d)输出整数 
   system("PAUSE");              //（#include<stdlib.h>） 冻结窗口 放 {返回 0}上面 
   return 0; 
}

