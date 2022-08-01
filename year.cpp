//定义一个符号常量，记录一年中的总小时数（按每年365天计算）。用户输出任意一个小时数，则可以显示过去多少年
#include<stdio.h>
#define Hour_years（365*24）
int main()
{
	float hours;
	printf("请输入小时数：\n");
	scanf("%f",&hours);
	printf("已经过了%3f年\n"，hours/Hour_years);
	return 0;
}
