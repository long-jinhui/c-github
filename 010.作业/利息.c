#include<stdio.h>
#include<math.h>         //调用函数
#include<stdlib.h> 
int main()
{
	double p,d,r,g,n,m;
	p=6000;d=300000;r=0.01;
    g=p/(p-d*r);    //g=2
	n=log(g);       //n=0.69
	m=log(1+r);      //0.0099503
	printf("利息=%lf\n",n/m);
    system("PAUSE");
    return 0;
}
