#include<stdio.h>
#include<string.h>
int main()
{
char str1[12]={"hello"};
char str2[12]={"world"};
char str3[12];
int a;
strcpy(str3,str1);/*����1��3*/
printf("str3=%s  str1=%s\n",str3,str1); 

strcat(str1,str2); /*����*1��2*/ 
printf("str1=%s str2=%s\n",str1,str2); 

a=strlen(str1);/*����1�ĳ���*/
printf("����a����=%d",a);
getchar();
return 0; 
 } 
