#include<stdio.h>//����ָ��ĺ��� 
#include<string.h>
char*SB(char*sb1,char*sb2){//��������char*(ָ��) 
	printf("sb1�ĳ���Ϊ%d  sb2�ĳ���Ϊ%d",strlen(sb1),strlen(sb2));//strlen ��ʾ �ַ������� 
	if(strlen(sb1)>=strlen(sb2)){
		return sb1; 
	}else{
		return sb2;
	}
}
int main()
{
	char sb1[5],sb2[5],*sb;//sbָ��һ���ַ��� 
	printf("\n�������һ���ַ���:");
	gets(sb1);
	printf("\n������ڶ����ַ���:");
	gets(sb2);
	sb=SB(sb1,sb2);
	printf("\nLonger str=%s\n",sb);
	getchar();
	getchar();
	return 0;
}
