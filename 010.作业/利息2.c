#include<stdio.h>
#include<math.h>     //调用函数 
#include<stdlib.h> 
int main()
{
	double p,d,r,g,h;
	p=6000;d=300000;r=0.01;
	h=1+r;
    g=p/(p-d*r);    //g=2
	printf("利息=%lf\n",log(g)/log(h));    //注意log书写 
	system("PAUSE");
    return 0;
}
