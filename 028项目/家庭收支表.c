 # include<stdio.h>
 # include<string.h>
 void main(){
 	//��ʾ�˵�
	//do-while ����4��ʾ�˳� 
 	char key;
	int loop=1; //�����˳��˵�
	char  details[3000]="\n-----------------��ǰ��֧��ϸ-----------------\n��֧\t��֧���\t�˻����\t˵ ��";//��¼���������֧����Ϣ 
	char note[20];//�������֧����˵�� 
	double money=0.0;
	double yuer=1000;//��� 
	char temp[100];//��ʽ������ ƴ�ӵ�details 
	char choice;//ѡ���Ƿ��˳� y/n 
	int flag=0;//�Ƿ�������һ�������֧�� 
	
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
			 if(flag==1){
			 printf("%s",details);
			 }else printf("\n��ǰû���κ���֧��ϸ");
			 break; 
 			
 		
 			 case'2':printf("����������:");
			 scanf("%lf",&money);
			 getchar();//���˻س� 
			 yuer+=money;//������� 
			 printf("������Դ");
			 scanf("%s",note);
			 getchar();//���˻س� 
			 sprintf(temp,"\n����\t%2.f\t\t%.2f\t\t%s",money,yuer,note);//����д�뵽temp�ַ� 
			 strcat(details,temp);  //ƴ�ӵ�details
			 flag=1;
			 break;
			 
			 
 			case'3':printf("����֧�����");
			 scanf("%lf",&money);
			 getchar(); 
			 
			 //�ж��Ƿ�Ǯ 
			 if(money>yuer){//���� 
			 printf("��� �������"); 
			 break;//��ǰ��ֹswitch��� 
			 }
			 printf("\n����֧��˵��:");
			scanf("%s",note);
			getchar();
			yuer-=money;//������� 
			 sprintf(temp,"\n֧��\t%2.f\t\t%.2f\t\t%s",money,yuer,note);//����д�뵽temp�ַ� 
			 strcat(details,temp);//ƴ������char����
			 flag=1;
			 break;
 			
 			case'4':
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
			 if(choice=='y'){
			 	loop=0;
			 }
		 }
	 }while(loop==1);
	 printf("�����˳����");
 }
