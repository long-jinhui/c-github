#include<stdio.h>
int main(){
	int MAX=4;
	char *var[]={"��������","���μ�","��¥��","ˮ䰴�"}; 
 	int i,len=4;
 	for(i=0;i<len;i++){
		printf("\nvar[%d]ָ����ַ���=%s var[%d]��ַΪ%p",i,var[i],i,&var[i]);
	}
 	getchar();
 	return 0;
   	}
