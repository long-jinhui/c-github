#include<stdio.h>
int main()
{ 
     int g;
     scanf("%i",&g);
 	 switch(g)
 	 {
 	 	case 123 : printf("aaa\n\n");break; /*�賿1��� ¥�¾ưɹ����ʳ� ��ϵ����ú÷ŵ�*/
		case 456 : printf("bb\n\n");break;  /*  ''������Ǹ���ĸ�� ���ֲ��� */ 
		case 789 : printf("cc\n\n");break;
		case 666 : printf("d\n\n");break;
		default  : printf("���������Լ��䲻��\n");return 0;
		  	  }
    return main();
}
