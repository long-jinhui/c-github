 # include<stdio.h>
 # include<string.h>
 void main(){
 	//显示菜单
	//do-while 输入4表示退出 
 	char key;
	int loop=1; //控制退出菜单
	char  details[3000]="\n-----------------当前收支明细-----------------\n收支\t收支金额\t账户金额\t说 明";//记录所有收入和支出信息 
	char note[20];//对收入或支出的说明 
	double money=0.0;
	double yuer=1000;//余额 
	char temp[100];//格式化收入 拼接到details 
	char choice;//选择是否退出 y/n 
	int flag=0;//是否有至少一笔收入或支出 
	
 	do{
 		printf("\n-----------------家庭收支记账软件-----------------");
 		printf("\n                    1 收资明细"); 
 		printf("\n                    2 登记收入"); 
 		printf("\n                    3 登记支出"); 
 		printf("\n                    4 退    出"); 
 		printf("\n选择(1~4):"); 
 		scanf("%c",&key);
 		getchar();
 		
 		switch(key){
 			case'1':
			 if(flag==1){
			 printf("%s",details);
			 }else printf("\n当前没有任何收支明细");
			 break; 
 			
 		
 			 case'2':printf("本次收入金额:");
			 scanf("%lf",&money);
			 getchar();//过滤回车 
			 yuer+=money;//更新余额 
			 printf("收入来源");
			 scanf("%s",note);
			 getchar();//过滤回车 
			 sprintf(temp,"\n收入\t%2.f\t\t%.2f\t\t%s",money,yuer,note);//数据写入到temp字符 
			 strcat(details,temp);  //拼接到details
			 flag=1;
			 break;
			 
			 
 			case'3':printf("本次支出金额");
			 scanf("%lf",&money);
			 getchar(); 
			 
			 //判断是否够钱 
			 if(money>yuer){//不够 
			 printf("穷鬼 快点死阿"); 
			 break;//提前终止switch语句 
			 }
			 printf("\n本次支出说明:");
			scanf("%s",note);
			getchar();
			yuer-=money;//更新余额 
			 sprintf(temp,"\n支出\t%2.f\t\t%.2f\t\t%s",money,yuer,note);//数据写入到temp字符 
			 strcat(details,temp);//拼接两个char数组
			 flag=1;
			 break;
 			
 			case'4':
			printf("确定要退出马?y/n");
			 do{
			 	scanf("%c",&choice);
			 	getchar();//过滤回车
			 	if(choice=='y'||choice=='n')
				 {
				 break;
				 }
				 printf("你输入有误 重新输入");
			 }while(1); 
			 if(choice=='y'){
			 	loop=0;
			 }
		 }
	 }while(loop==1);
	 printf("你已退出软件");
 }
