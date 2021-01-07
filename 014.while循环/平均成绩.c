#include<stdio.h>
int main()
{
	float a,b,c,d,e,aver;
	int i=1;
	while(i<=50)  /*50人平均成绩*/ 
	{
		scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        aver=(a+b+c+d+e)/5;
        printf("平均成绩=%7.2f\n",aver);
        printf("这一次%i",i);
		i++; /*可写为i=i+1*/
		 /*i++：在使用i之后使i加1 
		++i：在使用i之前使i加1 */
        printf("下一次%i\n",i);
	}
	getchar();
	return 0;				
}
