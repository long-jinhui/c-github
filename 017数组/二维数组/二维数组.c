#include<stdio.h>
void main(){
	int a[4][6];
	int i,j;
	for(i=0;i<4;i++){//���� �� 
		for(j=0;j<6;j++){//���� ��  
		 a[i][j]=0;//ʹ������ȫ��Ԫ��Ϊ0 
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
		printf("a[%d]�ĵ�ַ=%.2p ",i,a[i]);
		for(j=0;j<6;j++){
		printf("a[%d%d]�ĵ�ַ=%p",i,j,a[i]);//����Ԫ�صĵ�ַ�������ֲ��� ����ǰһ��Ԫ�صĻ����ϼ�1 
		}
		printf("\n");
}
getchar();
}
