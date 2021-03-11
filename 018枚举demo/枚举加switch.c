#include<stdio.h>
enum Season{SPRING=1,SUMMERE,AUTUMN,WINTER}season;
void main()/*返回空值 不用返回0*/
{
printf("输入你喜欢的季节 1.spring,2.summer 3.autumn 4.winter:\n");
scanf("%d",&season);
	switch(season) 
	{                   
		case SPRING: printf(" Your favorite season is spring \n");break;
		case SUMMERE: printf(" Your favorite season is summer\n");break;                     
		case AUTUMN: printf(" Your favorite season is autumn\n");break;                   
		case WINTER: printf(" Your favorite season is winter\n");break;         
		default  : printf(" Your fucking stupid \n");break;  
	}
	getchar();
	getchar();

}
