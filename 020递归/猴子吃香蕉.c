#include<stdio.h> 
int p(int day){
	if(day==10)/*��ʮ�� �趨��ֵֹ ����������ѭ��*/
	{
		return 1;  /*����ֵΪ1 ����ֱ�ӵ���*/ 
	}
	else {
	return (p(day+1)+1)*2; 
	}
}
void main()
{
	int num=p(1);/*һ��ʼ�м����㽶*/ 
	printf("%d",num);
	getchar();
}
