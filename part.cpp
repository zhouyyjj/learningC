//模拟钟点工的计费情况
#include<stdio.h>
int main()
{
	int h;
	int salary=25;
	int total;

	printf("请输入工作时长：\n");
	scanf("%d",&h);
	total=h*salary;
	printf("该钟点工今日工资为%d元\n",total);
	return 0;
}