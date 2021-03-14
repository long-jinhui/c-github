#include<stdio.h>
int a=200;/*定义全局变量*/
/*局部变量可使用全局变量 反之不行*/ 
int skt_t1(){
	printf("\nfaker%d\n",a);//全局变量 
}
int rng(){
	a=250;//重新定义全局变量 值变为250 
	//int a=250  定义局部变量  16行值为200 
	printf("\nuzi%d\n",a);
}
int main(){
	printf("\n%d\n",a);//200
	skt_t1();//200
	rng();//250
	skt_t1();//250
	getchar();
}
