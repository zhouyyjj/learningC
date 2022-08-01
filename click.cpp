//创建函数click（）用于记录用户点击量，函数定义static变量sum=0，每次调用sum值加1，调用五次，查看此时点击量
#include<stdio.h>
void click()//创建函数
{
	static int sum=0;
	sum=sum+1;
	printf("sum的值为%d\n",sum);
}

int main()
{
	click();//第一次调用
	click();//第二次调用
	click();
	click();
	click();
}