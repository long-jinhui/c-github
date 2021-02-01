#include<stdio.h>/*输出数组内最大值以及下标*/
int main()
{
	int a[]={67,8650,-46,3065,5169};
	int max=a[0];
	int i=1;
	int xb=0;
	int b=sizeof(a)/sizeof(int); /*数组个数*/ 
	for(;i<b;i++){
		if(a[i]>max){
		max=a[i]; /*最大值*/ 
		xb=i;   /*下标*/	
		}	
	 }
	printf("max%d\n",max);
	printf("xb=%d\n",xb);
	printf("a[%d]=%d",xb,max); 
	getchar();
}
