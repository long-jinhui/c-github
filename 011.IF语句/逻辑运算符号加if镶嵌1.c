#include<stdio.h>
int main()
{
	int a,b,c;  
	b=7;                 
	scanf("%i",&a); 
			if((a>=2)==1) /*  ==后面跟 1/0 代表真/假  =跟0/1表示赋值 */
			 	 {	
				 	if(a==111222333)/*if(a==6)表示当a的值为6   if(a=6)表示令a=6*/    
				  		/*  if((a=6)==1)表示赋值a为6并且为真命题 */ 
				  		/*  =表示赋值  ==表示判断真假*/
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
					return main();   /*返回头函数*/
				}				
}
