#include<stdio.h>
#define ALL_SB 2 

struct Person{//定义结构体 
	char name[20];//姓名 
	int num;//编号 
	char sex[20];//性别 
	char job;//职业  s表示学生 t表示老师 
	
	union{//定义共用体 
		float score;//分数 
		char course[20];//课程 
	}sc;//共用体变量 
};
int main(){
	int i;
	struct Person person[ALL_SB];//定义结构体数组 
	
	// 输入人员信息 
	for(i=0;i<ALL_SB;i++){
		printf("输入人员信息:姓名 编号 性别 职业"); 
		scanf("%s %d %s %c",person[i].name,&(person[i].num),person[i].sex,&(person[i].job));//输入数字和char前面要加地址符？？？？？ 
		if(person[i].job=='s'){//如果是学生 
			printf("输入该学生成绩");
			scanf("%f",&person[i].sc.score);
		}else//老师 
		{
			printf("输入老师授课课程"); 
			scanf("%s",person[i].sc.course);	
		}
		fflush(stdin);//刷新输入 
	}
	//输出人员信息 
	printf("\nName\t\tNum\tSex\tJob\tScore/Course\n");
	for(i=0;i<ALL_SB;i++){
		if(person[i].job=='s'){
		printf("%s\t\t%d\t%s\t%c\t\t%f\n",person[i].name,person[i].num,person[i].sex,person[i].job,person[i].sc.score);
		}else
		{//老师 
		printf("%s\t\t%d\t%s\t%c\t\t%s\n",person[i].name,person[i].num,person[i].sex,person[i].job,person[i].sc.course);
		}	
	} 
	getchar();
	getchar(); 
}
















 
