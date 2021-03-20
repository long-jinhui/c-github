#include<stdio.h>
union data{//共用体占空间大小以最大成员为准 
	int n;//4字节 
	char ch;//1字节 
	short m;//2字节 
};
int main(){
	union data a;//定义一个共用体变量 
	printf("%d,%d\n",sizeof(a),sizeof(union data));
	a.n=0x40;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.ch='9';
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.m=0x2059;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	a.n=0x3E25AD54;
	printf("%d %c %d\n",a.n,a.ch,a.m);
	
	getchar();
	//字节数从低位开始存放 
}
