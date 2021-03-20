#include<stdio.h>
int main(){
struct Cat{//创建结构体 Cat  是自己构造的数据类型 
	char*name;//指向一个字符串 
	int age;
	char*color;
};
//创建变量 
struct Cat cat1;  // cat1 是一个struct Cat 的变量       (struct Cat) cat1 等于 (int) num 
struct Cat cat2;  // cat2 是一个struct Cat 的变量 
cat1.name="小白";
cat1.age=3;
cat1.color="白色";

cat2.name="小花";
cat2.age=100;
cat2.color="花色"; 
 
 printf("\n第一只猫叫%s age=%d color=%s\n",cat1.name,cat1.age,cat1.color); 
 printf("\n第二只猫叫%s age=%d color=%s",cat2.name,cat2.age,cat2.color); 

}




