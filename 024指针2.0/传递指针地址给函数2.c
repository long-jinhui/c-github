#include<stdio.h>
double getSB(int*arr,int size);//�������� 
double getSB2(int*arr,int size);
int main(){
	int BABA[5]={1,2,3,4,5};
	double avg;
	/*����һ��ָ������� ָ�� ��Ϊ����*/ 
	avg=getSB(BABA,5);// Ӧ�ÿ������Ϊ int *arr=BABA 
	
	printf("avg��ֵΪ%f\n",avg);
getchar();
return 0;
}

double getSB(int*arr,int size)
{
	int i,sum=0;
	double avg;
	for(i=0;i<size;++i){
		//arr[0]=arr+0
		//arr[1]=arr+4(1��int�ֽ�) 
		//������arr��ֵ���Ӱ�� arr��û�иı� 
		sum+=arr[i];//   arr[0]ȡ�� �����һ��Ԫ�صĵ�ַ 
		//sum=0+ 1(arr[0]) sum=1+ 2(arr[1]) sum=2+ 3(arr[2])
		printf("sum��ֵΪ%d",sum);
		printf("\narr��ŵĵ�ַΪ%p",arr);
	}
	avg=(double)sum/size;//��ƽ��ֵ 
	return avg;
 }
 
 double getSB2(int*arr,int size)
 {
 	int i,sum=0;
	double avg;
	for(i=0;i<size;++i){//�������� 
		sum+=*arr;//sum=0+ 1(*arr) sum=1+ 2(*arr) sum=2+ 3(*arr)
		printf("\narr��ŵĵ�ַΪ%p",arr);
		printf("*arr=%d",*arr);
		printf("sum��ֵΪ%d\n\n\n",sum);
		arr++;
		//arr=arr+4
		//arr��ֵ�ı�
	}
	avg=(double)sum/size;//��ƽ��ֵ 
	return avg;
 }

