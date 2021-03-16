#include<stdio.h>
void main(){
	int a[4][6];
	int i,j;
	for(i=0;i<4;i++){//遍历 行 
		for(j=0;j<6;j++){//遍历 列  
		 a[i][j]=0;//使数组内全部元素为0 
		}
	}
	a[1][2]=1; 
	a[2][1]=2;
	a[2][3]=3;
		for(i=0;i<4;i++){
		for(j=0;j<6;j++){
		printf("%d  ",a[i][j]); 
		}
		printf("\n");
	}
	for(i=0;i<4;i++){
		printf("a[%d]的地址=%.2p ",i,a[i]);
		for(j=0;j<6;j++){
		printf("a[%d%d]的地址=%p",i,j,a[i]);//各个元素的地址是连续分布的 即在前一个元素的基础上加1 
		}
		printf("\n");
}
getchar();
}
