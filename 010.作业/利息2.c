#include<stdio.h>
#include<math.h>     //���ú��� 
#include<stdlib.h> 
int main()
{
	double p,d,r,g,h;
	p=6000;d=300000;r=0.01;
	h=1+r;
    g=p/(p-d*r);    //g=2
	printf("��Ϣ=%lf\n",log(g)/log(h));    //ע��log��д 
	system("PAUSE");
    return 0;
}
