#include<stdio.h>
int main(){
	int MAX=4;
	char *var[]={"三国演义","西游记","红楼梦","水浒传"}; 
 	int i,len=4;
 	for(i=0;i<len;i++){
		printf("\nvar[%d]指向的字符串=%s var[%d]地址为%p",i,var[i],i,&var[i]);
	}
 	getchar();
 	return 0;
   	}
