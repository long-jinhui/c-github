#include<stdio.h>
#define ALL_SB 2 

struct Person{//����ṹ�� 
	char name[20];//���� 
	int num;//��� 
	char sex[20];//�Ա� 
	char job;//ְҵ  s��ʾѧ�� t��ʾ��ʦ 
	
	union{//���干���� 
		float score;//���� 
		char course[20];//�γ� 
	}sc;//��������� 
};
int main(){
	int i;
	struct Person person[ALL_SB];//����ṹ������ 
	
	// ������Ա��Ϣ 
	for(i=0;i<ALL_SB;i++){
		printf("������Ա��Ϣ:���� ��� �Ա� ְҵ"); 
		scanf("%s %d %s %c",person[i].name,&(person[i].num),person[i].sex,&(person[i].job));//�������ֺ�charǰ��Ҫ�ӵ�ַ������������ 
		if(person[i].job=='s'){//�����ѧ�� 
			printf("�����ѧ���ɼ�");
			scanf("%f",&person[i].sc.score);
		}else//��ʦ 
		{
			printf("������ʦ�ڿογ�"); 
			scanf("%s",person[i].sc.course);	
		}
		fflush(stdin);//ˢ������ 
	}
	//�����Ա��Ϣ 
	printf("\nName\t\tNum\tSex\tJob\tScore/Course\n");
	for(i=0;i<ALL_SB;i++){
		if(person[i].job=='s'){
		printf("%s\t\t%d\t%s\t%c\t\t%f\n",person[i].name,person[i].num,person[i].sex,person[i].job,person[i].sc.score);
		}else
		{//��ʦ 
		printf("%s\t\t%d\t%s\t%c\t\t%s\n",person[i].name,person[i].num,person[i].sex,person[i].job,person[i].sc.course);
		}	
	} 
	getchar();
	getchar(); 
}
















 
