#include<stdio.h>
int main(){
	int SB=3;
	int var[]={10,50,70}; 
 	int i,*ptr;
 	ptr=var;//ptrָ��var������׵�ַ 
 	for(i=0;i<SB;i++){
 		printf("var[%d]��ַ=%p\n",i,ptr);
 		printf("����ֵ:var[%d]=%d",i,*ptr);
 		ptr++;//ptr���ֵ�ڼ� һ����λ 4�ֽ�(int)
 		printf("\nptr�ĵ�ַ%p",&ptr);//��ptr�ĵ�ַ 
 		printf("\nvar�ĵ�ַ%p\n\n\n",&var);//��var�ĵ�ַ 
	}
 	getchar();
 	return 0;
   	}
