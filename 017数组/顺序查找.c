#include<stdio.h>
int SB(int arr[],int a,int b){
	int i;
	for(i=0;i<a;i++)
	{
		if(arr[i]==b)
		{
			return i;
		}
	}
	return -1;
}
void main()
{
	int arr[]={5,4,8,9,789}; 
	int aLen=sizeof(arr) / sizeof(int);/*���������*/
	int g;
	scanf("%d",&g);
	int LJ=SB(arr,aLen,g);
	if(LJ != -1){
		printf("�ҵ��±�Ϊ%d",LJ);
	}
	else{
		printf("����");
	}
	getchar(); 
}
