#include<stdio.h>
int main()
{
	float a,b,c,d,e,aver;
	int i=1;
	while(i<=50)  /*50��ƽ���ɼ�*/ 
	{
		scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        aver=(a+b+c+d+e)/5;
        printf("ƽ���ɼ�=%7.2f\n",aver);
        printf("��һ��%i",i);
		i++; /*��дΪi=i+1*/
		 /*i++����ʹ��i֮��ʹi��1 
		++i����ʹ��i֮ǰʹi��1 */
        printf("��һ��%i\n",i);
	}
	getchar();
	return 0;				
}
