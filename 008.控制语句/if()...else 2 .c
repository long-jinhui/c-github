#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int a,b,z;  
	printf("��������������");
    scanf("%d   %d", &a, &b);   /*�����м���һ���ո� ������  ����(��)  */
	if(a>b)  z=a;              //ע���������ִ�С������ 
	else z=b;
	printf("%d\n", z);
	system("PAUSE"); 
	return 0;
}
