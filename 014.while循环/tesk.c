#include<stdio.h>
int main()
{
	int a,b=0;
	printf("����a:");
	scanf("%d",&a);
	if(a==123)      //���� 
		{
			printf("gg");
			return 0;
		}
	else  //whileѭ�� 
	{
		while(a<=3)
		{
			b=b+a;
			a++;
		}
	printf("b=%d\n\n",b);
	return main();
	}

 } 
 
