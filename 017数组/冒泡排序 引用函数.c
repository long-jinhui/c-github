#include<stdio.h>
void bubbleSort(int arr[],int aLen)/*冒泡排序的函数*/
{ 
	int t;//空值供转换用 
	int j,i;
		for(i=0;i<aLen;i++)//总体重复7次
		//一次只换一轮顺序  重复7次
	{
		for(j=0;j<aLen-1;j++)//所有数字进行位置调换按顺序轮一次
		{
			if(arr[j]>arr[j+1])//若前大于后 相邻两个数字位置交换 
			{
				t=arr[j]; /*令t等于arr[j] t为上位概念*/
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}	
		}
	}
} 
int main()
{
	int j; 
int arr[]={3,9,-1,10,-2,456,-9};
int aLen=sizeof(arr) / sizeof(int);  /*计算数组个数*/
		printf("aLen=%d\n",aLen);//7	
bubbleSort(arr,aLen); /*调用函数*/
for(j=0;j<aLen;j++){    /*格式 带\0*/ 
	printf("%d\n",arr[j]);
		}
		getchar();
		return 0;
}
	  
