#include<stdio.h>
#include<stdlib.h> 
int main()
{
	char V;
	scanf("%c",&V);
	switch(V)                                        /*��ʱ��֪����ʲô��ʽ ���յ�ѧУ�ֲ��� ��Ҳ���ò飨�������ͻ��ַ��ͣ�����{���}��*/               
	{
		case 'A' : printf("��ĳɼ�:�����\n");break;
		case 'B' : printf("��ĳɼ�:������\n");break;                     /*ע�� ��Ƕ ��ʽ*/
		case 'C' : printf("��ĳɼ�:����Ŭ��\n");break;                    /*��βע��break   ʹ����ֱ��ת��switch���ĩβ*/
		case 'D' : printf("��ĳɼ�:����Ǹ�����\n");break;               /*case˳��Ӱ�����*/  /*case�����벻ͬ ������г�ͻ*/ 
		default  : printf("���������Լ��䲻��\n");                       /*���û��default ����ת��switch�����һ����䣡��������������*/ 
	}
	system("pause");
	return 0;
 } 
