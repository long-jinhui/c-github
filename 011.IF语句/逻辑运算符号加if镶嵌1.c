#include<stdio.h>
int main()
{
	int a,b,c;  
	b=7;                 
	scanf("%i",&a); 
			if((a>=2)==1) /*  ==����� 1/0 ������/��  =��0/1��ʾ��ֵ */
			 	 {	
				 	if(a==111222333)/*if(a==6)��ʾ��a��ֵΪ6   if(a=6)��ʾ��a=6*/    
				  		/*  if((a=6)==1)��ʾ��ֵaΪ6����Ϊ������ */ 
				  		/*  =��ʾ��ֵ  ==��ʾ�ж����*/
				 	{
				 		printf("GG");
				 		getchar();
				 		return 0;
				 	}
					else
					{
				 	 	printf("%d\n\n",b+1);
				 		return main(); 
				 	}
				 }		
			else
			  	{
					printf("%d\n\n",b);
					return main();   /*����ͷ����*/
				}				
}
