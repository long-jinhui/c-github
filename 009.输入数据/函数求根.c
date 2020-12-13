#include<stdio.h>
#include<stdlib.h>
#include<math.h>               //调用平方根函数sprt 
int main()
{
double a,b,c,x1,x2,p,q,B;                       /*不能用int 无法保证运算过程中不出现小数*/
	scanf("%lf%lf%lf",&a,&b,&c);           /*双精度变量*/
	B=b*b-4*a*c;
	p=-b/(2.0*a);
	 q=sqrt(B)/(2.0*a);                    //平方 
	 x1=p+q;
	 x2=p-q;
	printf("%7.3f\n%f\n",x1,x2);                //输出小数    //%f表示小数     %7.2f表示2个小数   7.3三个小数.... 
	system("PAUSE");
	return 0;
 } 
