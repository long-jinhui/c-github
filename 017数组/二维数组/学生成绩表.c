#include<stdio.h>
void main(){
	double excel[3][5];
   	int rows=sizeof(excel)/sizeof(excel[0])/*��������3*/,cols=sizeof(excel[0])/sizeof(double)/*��������5*/,i,j;
	//class_SBΪ�����ܳɼ�   ALL_SB Ϊ����ѧ���ɼ� 
	double class_SB=0.0,ALL_SB=0.0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			excel[i][j]=0.0;//ȫ����ֵΪ0.0 
		}
	}
	//����  ��ÿ��ѧ������ɼ� 
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("�����%d����ĵ�%d��ѧ���ĳɼ�",i+1,j+1); 
		scanf("%lf",&excel[i][j]);
		}
	}
	//��ʾ����ĳɼ�
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("%.2f  ",excel[i][j]);
		}
		printf("\n");
	}
	//�����ܳɼ� ѧ���ܳɼ�
	 	for(i=0;i<rows;i++){
	 		class_SB=0.0; 
		for(j=0;j<cols;j++){
			class_SB+=excel[i][j]; 
		}
		printf("\n��%d���༶��ƽ���ɼ���%.2f",i+1,class_SB/cols);
		ALL_SB+=class_SB;
	}
	printf("\n����ѧ�����ܳɼ�Ϊ %.2f  ƽ���ɼ�Ϊ%.2f",ALL_SB,ALL_SB/(rows*cols));
	getchar();
	getchar();
} 
