#include<stdio.h>
int main()
{
	int a;
	scanf("%i",&a);
	if((a%4==0 && a%100!=0)||a%400==0)
	/* !=��������   if�������������� 0/1 �ж��߼�*/
		printf("����"); 
	else
		printf("������"); 
    
    return main();
}
