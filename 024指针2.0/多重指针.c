#include<stdio.h>
 int main(){
	int var=3000;
	int *ptr;//һ��ָ�� 
	int **pptr;//����ָ�� 
	int ***ppptr;//����ָ��
	 
	ptr=&var;//var�����ĵ�ַ��ֵ��ptr 
	
	pptr=&ptr; //ptr����ĵ�ַ��ֵ��pptr 
	
	ppptr=&pptr; //pptr����ĵ�ַ��ֵ��ppptr 
	
	printf("var�ĵ�ַ=%p  var����=%d\n",&var,var);
	printf("ptr����ĵ�ַ=%p ptr��ŵĵ�ַ=%p *ptr=%d\n",&ptr,ptr,*ptr);
	printf("pptr�ĵ�ַ=%p pptr��ŵĵ�ַ=%p  **pptr=%d\n",&pptr,pptr,**pptr);
	printf("ppptr�ĵ�ַ=%p ppptr��ŵĵ�ַ=%p  ***ppptr=%d\n",&ppptr,ppptr,***ppptr);	
getchar();
return 0;
}
