#include<stdio.h>
int main(){
	int MAX=3;
	int var[]={10,50,70}; 
 	int i,*ptr[3];
 	for(i=0;i<MAX;i++){
 		ptr[i]=&var[i];
	 }
	for(i=0;i<MAX;i++){
		printf("var[%d]��ֵΪ%d  ptr[%d]����ĵ�ַ=%p\n",i,*ptr[i],i,&ptr[i]);
	}
 	getchar();
 	return 0;
   	}
