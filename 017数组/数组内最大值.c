#include<stdio.h>/*������������ֵ�Լ��±�*/
int main()
{
	int a[]={67,8650,-46,3065,5169};
	int max=a[0];
	int i=1;
	int xb=0;
	int b=sizeof(a)/sizeof(int); /*�������*/ 
	for(;i<b;i++){
		if(a[i]>max){
		max=a[i]; /*���ֵ*/ 
		xb=i;   /*�±�*/	
		}	
	 }
	printf("max%d\n",max);
	printf("xb=%d\n",xb);
	printf("a[%d]=%d",xb,max); 
	getchar();
}
