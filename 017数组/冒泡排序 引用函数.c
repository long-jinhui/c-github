#include<stdio.h>
void bubbleSort(int arr[],int aLen)/*ð������ĺ���*/
{ 
	int j;
	int t,i;
		for(i=0;i<aLen;i++)
	{
		for(j=0;j<aLen-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j]; /*��t����arr[j] tΪ��λ����*/
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
int aLen=sizeof(arr) / sizeof(int);  /*�����������*/
	//	printf("aLen=%d\n",aLen);	
bubbleSort(arr,aLen); /*���ú���*/ 
for(j=0;j<aLen;j++){    /*��ʽ ��\0*/ 
	printf("%d\n",arr[j]);
		}
		getchar();
		return 0;
}
	  
