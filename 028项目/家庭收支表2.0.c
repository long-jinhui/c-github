#include<stdio.h>
#include<string.h>
struct ALL_SB{
	int flag;
	char details[3000];
	double yuer;
};
	char key;
	int loop=1; //�����˳��˵�
	char note[20];//�������֧����˵�� 
	double money=0.0;
	char temp[100];//��ʽ������ ƴ�ӵ�details 
	char choice;//ѡ���Ƿ��˳� y/n 
	
	//֧�� ���� 
	void Pay(struct ALL_SB*all_sb){
		printf("����֧�����");
		 scanf("%lf",&money);
			 getchar(); 
			 //�ж��Ƿ�Ǯ 
			 if(money>(*all_sb).yuer){  //yuer��*all_sb���� ����Ҫ���� 
			 printf("��� �������"); 
			 return;
			 }
			 printf("\n����֧��˵��:");
			scanf("%s",note);
			getchar();
			(*all_sb).yuer-=money;//������� 
			 sprintf(temp,"\n֧��\t%2.f\t\t%.2f\t\t%s",money,(*all_sb).yuer,note);//����д�뵽temp�ַ� 
			 strcat((*all_sb).details,temp);//ƴ������char����    //details��*all_sb���� ����Ҫ���� 
			 (*all_sb).flag=1;
	}
	//���뺯�� 
	void Shouru(struct ALL_SB*all_sb){
			printf("����������:");
			 scanf("%lf",&money);
			 getchar();//���˻س� 
			 (*all_sb).yuer+=money;//������� 
			 printf("������Դ");
			 scanf("%s",note);
			 getchar();//���˻س� 
			 sprintf(temp,"\n����\t%2.f\t\t%.2f\t\t%s",money,(*all_sb).yuer,note);//����д�뵽temp�ַ� 
			 strcat((*all_sb).details,temp);  //ƴ�ӵ�details
			 (*all_sb).flag=1;
		
	}
	//��ϸ���� 
	void Details(struct ALL_SB*all_sb){
		if((*all_sb).flag==1){
			 printf("%s",(*all_sb).details);
			 }else printf("\n��ǰû���κ���֧��ϸ");
	} 
	//�˳�����
	void Exit (struct ALL_SB*all_sb){
	printf("ȷ��Ҫ�˳���?y/n");
			 do{
			 	scanf("%c",&choice);
			 	getchar();//���˻س�
			 	if(choice=='y'||choice=='n')
				 {
				 break;
				 }
				 printf("���������� ��������");
			 }while(1); 
			 if(choice=='y')
			 {
			 	loop=0;
			 }
		} 
	//�˵����� 
	void mainMenu(struct ALL_SB*all_sb)
{
		do{
 		printf("\n-----------------��ͥ��֧�������-----------------");
 		printf("\n                    1 ������ϸ"); 
 		printf("\n                    2 �Ǽ�����"); 
 		printf("\n                    3 �Ǽ�֧��"); 
 		printf("\n                    4 ��    ��"); 
 		printf("\nѡ��(1~4):"); 
 		scanf("%c",&key);
 		getchar();
 		switch(key){
 			case'1':
				Details(all_sb);
			 break; 
 			 case'2':
 			 	Shouru(all_sb);
			 break;
 			case'3':
			Pay(all_sb);
			break;
 			case'4':
			Exit(all_sb); 
	 				}}
	 while(loop==1);
	 printf("�����˳����");
	 getchar();
}
	 //������ 
	 int main(){
	 struct ALL_SB all_sb;
	 all_sb.flag=0;
 	 all_sb.yuer=1000;
	 //ʹ�ÿ����ķ�ʽ��ֵ 
	 memset(all_sb.details,3000,0);
	 strcpy(all_sb.details,"\n-----------------��ǰ��֧��ϸ-----------------\n��֧\t��֧���\t�˻����\t˵ ��");
	 
	 //����mainMenu��ʾ�˵� 
	 mainMenu(&all_sb);
	 getchar(); 
	 } 
	 
	 
	 
