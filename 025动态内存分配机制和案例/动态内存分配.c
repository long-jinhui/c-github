#include<stdio.h>
int main(){
	void check(int*);//�������� 
	int*p,i;
	p=(int*)malloc(5*sizeof(int));//�ڶ�������5* 4(int)�ֽڵ���ʱ�ռ�   (int*)===��(*void)תΪ(int*) ����p 
	//pָ����ʱ�ռ�ĵ�һ���ֽڵĵ�ַ 
	for(i=0;i<5;i++){  //5��int 
		scanf("%d",p+i);//i++ ���� p��1 ���� p��һ��int����һ�� int 
		//i����0ʱ pָ���ַ ���� ���ڸ���һ��int��ֵ 
	}
	check(p);//����һ���µ�ջ 
	free(p);//���ٶ���pָ��Ŀռ� �����ٱ�ʹ�� 
	getchar();
	getchar();
	return 0;
}
void check(int*p){//pָ�� ���� ��ʱ�ռ�ĵ�һ���ֽڵĵ�ַ 
	int i=0;
	printf("\n���������:");
	for(;i<5;i++)
	{
		if(p[i]<60)
		{
			printf("%d\n",p[i]);
		}
	}
	
}



