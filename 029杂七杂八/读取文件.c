#include<stdio.h>
void main(){
	FILE *fp=NULL;//创建文件指针 
	
	//定义一个缓冲区 
	char buff[1024];
	
	//打开文件 
	fp=fopen("d:/test2000.md","r");
	
//	//方法一读取 一行 
//	fscanf(fp,"%s",buff);//读一行到buff 
	
	
	//方法二读取整个文件 
	//读到NULL就结束 
	while(fgets(buff,1024,fp)!=NULL){
		printf("%s",buff);
	}; 
	
	//必须关闭文件 不然会保存失败 
	fclose(fp);

	getchar(); 
} 
