#include<stdio.h>
#include<stdlib.h>
#include<math.h>               //����ƽ��������sprt 
int main()
{
double a,b,c,x1,x2,p,q,B;                       /*������int �޷���֤��������в�����С��*/
	scanf("%lf%lf%lf",&a,&b,&c);           /*˫���ȱ���*/
	B=b*b-4*a*c;
	p=-b/(2.0*a);
	 q=sqrt(B)/(2.0*a);                    //ƽ�� 
	 x1=p+q;
	 x2=p-q;
	printf("%7.3f\n%f\n",x1,x2);                //���С��    //%f��ʾС��     %7.2f��ʾ2��С��   7.3����С��.... 
	system("PAUSE");
	return 0;
 } 
