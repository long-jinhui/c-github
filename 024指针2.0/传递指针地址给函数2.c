#include<stdio.h>
double getSB(int*arr,int size);//函数声明 
double getSB2(int*arr,int size);
int main(){
	int BABA[5]={1,2,3,4,5};
	double avg;
	/*传递一个指向数组的 指针 作为参数*/ 
	avg=getSB(BABA,5);// 应该可以理解为 int *arr=BABA 
	
	printf("avg的值为%f\n",avg);
getchar();
return 0;
}

double getSB(int*arr,int size)
{
	int i,sum=0;
	double avg;
	for(i=0;i<size;++i){
		//arr[0]=arr+0
		//arr[1]=arr+4(1个int字节) 
		//并不对arr的值造成影响 arr并没有改变 
		sum+=arr[i];//   arr[0]取得 数组第一个元素的地址 
		//sum=0+ 1(arr[0]) sum=1+ 2(arr[1]) sum=2+ 3(arr[2])
		printf("sum的值为%d",sum);
		printf("\narr存放的地址为%p",arr);
	}
	avg=(double)sum/size;//求平均值 
	return avg;
 }
 
 double getSB2(int*arr,int size)
 {
 	int i,sum=0;
	double avg;
	for(i=0;i<size;++i){//遍历数组 
		sum+=*arr;//sum=0+ 1(*arr) sum=1+ 2(*arr) sum=2+ 3(*arr)
		printf("\narr存放的地址为%p",arr);
		printf("*arr=%d",*arr);
		printf("sum的值为%d\n\n\n",sum);
		arr++;
		//arr=arr+4
		//arr的值改变
	}
	avg=(double)sum/size;//求平均值 
	return avg;
 }

