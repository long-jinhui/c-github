#include<stdio.h> 
int main()
{
	
 	int a,b;  
	b=7;                 
	scanf("%i",&a); 
			if((!(a>=2))==0)  /*  ！(语句)表示非  
			!(a>=2)表示a不等于2*/ 
		{ 		if(a==123)
					printf("GG");
				else 
					{
					printf("%d\n\n",b);
					getchar();
				return main();
					}
		}
			else{
			printf("%d\n\n",b+1);
			return main();
 				} 
}
