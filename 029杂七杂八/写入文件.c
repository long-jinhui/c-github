#include<stdio.h>
void main(){
	FILE *fp=NULL;
	fp=fopen("d:/test100.md","w+");//"w+"文件被截断为零长度 每次都是重头来过 
   // fp=fopen("d:/test100.md","a+");//"a+"文件追加 可在原先有东西的基础上继续编写 
	//在d盘写入test100.md文件 
	//将内容写到文件中
	
	
	fprintf(fp,"你好\n");
	fputs("你好傻逼\n",fp);//写入文件 方式同上 
	
	//关闭文件
	fclose(fp);//指针传入 
	
	printf("创建 写入信息完成");
	getchar() ;
	
} 
