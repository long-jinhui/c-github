#include<stdio.h>
void main(){
	double excel[3][5];
   	int rows=sizeof(excel)/sizeof(excel[0])/*计算行数3*/,cols=sizeof(excel[0])/sizeof(double)/*计算列数5*/,i,j;
	//class_SB为各班总成绩   ALL_SB 为所有学生成绩 
	double class_SB=0.0,ALL_SB=0.0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			excel[i][j]=0.0;//全部赋值为0.0 
		}
	}
	//遍历  给每个学生输入成绩 
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("输入第%d个班的第%d个学生的成绩",i+1,j+1); 
		scanf("%lf",&excel[i][j]);
		}
	}
	//显示输入的成绩
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("%.2f  ",excel[i][j]);
		}
		printf("\n");
	}
	//各班总成绩 学生总成绩
	 	for(i=0;i<rows;i++){
	 		class_SB=0.0; 
		for(j=0;j<cols;j++){
			class_SB+=excel[i][j]; 
		}
		printf("\n第%d个班级的平均成绩是%.2f",i+1,class_SB/cols);
		ALL_SB+=class_SB;
	}
	printf("\n所有学生的总成绩为 %.2f  平均成绩为%.2f",ALL_SB,ALL_SB/(rows*cols));
	getchar();
	getchar();
} 
