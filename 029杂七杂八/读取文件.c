#include<stdio.h>
void main(){
	FILE *fp=NULL;//�����ļ�ָ�� 
	
	//����һ�������� 
	char buff[1024];
	
	//���ļ� 
	fp=fopen("d:/test2000.md","r");
	
//	//����һ��ȡ һ�� 
//	fscanf(fp,"%s",buff);//��һ�е�buff 
	
	
	//��������ȡ�����ļ� 
	//����NULL�ͽ��� 
	while(fgets(buff,1024,fp)!=NULL){
		printf("%s",buff);
	}; 
	
	//����ر��ļ� ��Ȼ�ᱣ��ʧ�� 
	fclose(fp);

	getchar(); 
} 
