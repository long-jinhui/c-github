#include<stdio.h>
#include<string.h>
struct ALL_SB{
	int flag;
	char details[3000];
	double yuer;
};
	char key;
	int loop=1; //控制退出菜单
	char note[20];//对收入或支出的说明 
	double money=0.0;
	char temp[100];//格式化收入 拼接到details 
	char choice;//选择是否退出 y/n 
	
	//支出 函数 
	void Pay(struct ALL_SB*all_sb){
		printf("本次支出金额");
		 scanf("%lf",&money);
			 getchar(); 
			 //判断是否够钱 
			 if(money>(*all_sb).yuer){  //yuer在*all_sb里面 所以要引用 
			 printf("穷鬼 快点死阿"); 
			 return;
			 }
			 printf("\n本次支出说明:");
			scanf("%s",note);
			getchar();
			(*all_sb).yuer-=money;//更新余额 
			 sprintf(temp,"\n支出\t%2.f\t\t%.2f\t\t%s",money,(*all_sb).yuer,note);//数据写入到temp字符 
			 strcat((*all_sb).details,temp);//拼接两个char数组    //details在*all_sb里面 所以要引用 
			 (*all_sb).flag=1;
	}
	//收入函数 
	void Shouru(struct ALL_SB*all_sb){
			printf("本次收入金额:");
			 scanf("%lf",&money);
			 getchar();//过滤回车 
			 (*all_sb).yuer+=money;//更新余额 
			 printf("收入来源");
			 scanf("%s",note);
			 getchar();//过滤回车 
			 sprintf(temp,"\n收入\t%2.f\t\t%.2f\t\t%s",money,(*all_sb).yuer,note);//数据写入到temp字符 
			 strcat((*all_sb).details,temp);  //拼接到details
			 (*all_sb).flag=1;
		
	}
	//明细函数 
	void Details(struct ALL_SB*all_sb){
		if((*all_sb).flag==1){
			 printf("%s",(*all_sb).details);
			 }else printf("\n当前没有任何收支明细");
	} 
	//退出函数
	void Exit (struct ALL_SB*all_sb){
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
			 if(choice=='y')
			 {
			 	loop=0;
			 }
		} 
	//菜单函数 
	void mainMenu(struct ALL_SB*all_sb)
{
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
	 printf("你已退出软件");
	 getchar();
}
	 //主函数 
	 int main(){
	 struct ALL_SB all_sb;
	 all_sb.flag=0;
 	 all_sb.yuer=1000;
	 //使用拷贝的方式赋值 
	 memset(all_sb.details,3000,0);
	 strcpy(all_sb.details,"\n-----------------当前收支明细-----------------\n收支\t收支金额\t账户金额\t说 明");
	 
	 //调用mainMenu显示菜单 
	 mainMenu(&all_sb);
	 getchar(); 
	 } 
	 
	 
	 
