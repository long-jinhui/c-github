#include<stdio.h> /*�ַ�ָ�����*/
int main()
{
char * a="yes";  /*�ɸı䴫�ݵ�ַ*/
printf("a�ĵ�ַ%p  aָ��ĵ�ַ%p\n",&a,a);
 a="hello";
 printf("a�ĵ�ַ%p  aָ��ĵ�ַ%p\n",&a,a);
printf("%s",a);
 } 
