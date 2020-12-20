#include<stdio.h>
#include<stdlib.h>
int main()
 {
 	int x,y;
 	scanf("%d",&x);
   if(x>0)
 		y=1;
 		else                            //×¢ÒâÏâÇ¶ 
 		{ 
 		if(x<0)
 	 	y=-1;
    	else y=0;
		}
 		printf("%d",y);
 		system("pause");
 		return 0;
 }
