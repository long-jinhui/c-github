#include<stdio.h>
int main()
{
int arr[]={3,9,-1,10,-2,456,-9};
int  j,aLen;
int t,i;
aLen=sizeof(arr) / sizeof(int);  /*�����������*/
//	printf("aLen=%d\n",aLen);	
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
for(j=0;j<aLen;j++){    /*��ʽ ��\0*/ 
	printf("%d\n",arr[j]);
		}
		getchar();
		return 0;
}
	  
