#include<stdio.h>
void bubbleSort(int arr[],int aLen)/*ð������ĺ���*/
{ 
	int t;//��ֵ��ת���� 
	int j,i;
		for(i=0;i<aLen;i++)//�����ظ�7��
		//һ��ֻ��һ��˳��  �ظ�7��
	{
		for(j=0;j<aLen-1;j++)//�������ֽ���λ�õ�����˳����һ��
		{
			if(arr[j]>arr[j+1])//��ǰ���ں� ������������λ�ý��� 
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
		printf("aLen=%d\n",aLen);//7	
bubbleSort(arr,aLen); /*���ú���*/
for(j=0;j<aLen;j++){    /*��ʽ ��\0*/ 
	printf("%d\n",arr[j]);
		}
		getchar();
		return 0;
}
	  
