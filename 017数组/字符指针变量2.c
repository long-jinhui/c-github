#include<stdio.h> /*字符指针变量*/
int main()
{
char * a="yes";  /*可改变传递地址*/
printf("a的地址%p  a指向的地址%p\n",&a,a);
 a="hello";
 printf("a的地址%p  a指向的地址%p\n",&a,a);
printf("%s",a);
 } 
