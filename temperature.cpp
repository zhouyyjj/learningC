//编写函数返回体温值
#include<stdio.h>
int gettemperature()
{
	int temperature;
	printf("请输入温度：\n");
	scanf("%d",&temperature);
	printf("当前体温是：%d\n",temperature);
	return temperature;
}
int main()
{
	gettemperature();
		return 0;

}