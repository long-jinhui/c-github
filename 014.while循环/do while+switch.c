#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int a,b=0;
	char g;
	printf("����AΪwhileѭ��\n����bΪdo whileѭ��\n����C����\n������:"); 
	scanf("%c",&g);
	switch(g)
	{
	case'A':  /*whileѭ��*/ 
		{
			printf("����a��ֵ:"); 
        	scanf("%i",&a);
	  		while(a<=3)
			{
				b=b+a;
				a++;
			}
				printf("b=%d\n\n",b);break;
		}
	case'B':              /*do while ѭ��*/
		{
			printf("����a��ֵ:"); 
			scanf("%d",&a);
			do
			{
				b=b+a;
				a++;
			}	
			while(a<=3);
				printf("b=%d\n\n",b);break;
		}
	case'C':
	printf("GG\n\n");
	return 0;
	default:printf("����\n\n\n");  /*��俴���д*/
	}
	system("pause");
	return 0;
}

