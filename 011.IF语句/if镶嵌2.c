#include<stdio.h>
#include<stdlib.h>
int main()
 {
 	long int x,y;
 	   scanf("%d",&x);
    if(x>=0)
        {
		if(x>0)y=1;else y=0;        //可不加大括号 
		}
    else y=-1;
 		printf("%d",y);
 		system("pause");
 		return 0;
 }
