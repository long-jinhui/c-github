#include<stdio.h>
int main(){
struct Cat{//�����ṹ�� Cat  ���Լ�������������� 
	char*name;//ָ��һ���ַ��� 
	int age;
	char*color;
};
//�������� 
struct Cat cat1;  // cat1 ��һ��struct Cat �ı���       (struct Cat) cat1 ���� (int) num 
struct Cat cat2;  // cat2 ��һ��struct Cat �ı��� 
cat1.name="С��";
cat1.age=3;
cat1.color="��ɫ";

cat2.name="С��";
cat2.age=100;
cat2.color="��ɫ"; 
 
 printf("\n��һֻè��%s age=%d color=%s\n",cat1.name,cat1.age,cat1.color); 
 printf("\n�ڶ�ֻè��%s age=%d color=%s",cat2.name,cat2.age,cat2.color); 

}




