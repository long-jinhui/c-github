#include<stdio.h>
void main(){
	FILE *fp=NULL;
	fp=fopen("d:/test100.md","w+");//"w+"�ļ����ض�Ϊ�㳤�� ÿ�ζ�����ͷ���� 
   // fp=fopen("d:/test100.md","a+");//"a+"�ļ�׷�� ����ԭ���ж����Ļ����ϼ�����д 
	//��d��д��test100.md�ļ� 
	//������д���ļ���
	
	
	fprintf(fp,"���\n");
	fputs("���ɵ��\n",fp);//д���ļ� ��ʽͬ�� 
	
	//�ر��ļ�
	fclose(fp);//ָ�봫�� 
	
	printf("���� д����Ϣ���");
	getchar() ;
	
} 
