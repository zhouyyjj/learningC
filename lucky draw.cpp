//公司年会抽奖，根据控制台输入奖品号，输出奖品
#include<stdio.h>
int main()
{
	int i;
	printf("请输入你的号码：\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("42寸彩电\n");
	}
	if(i==2)
	{
		printf("微波炉\n");
	}
	if(i==3)
	{
		printf("加湿器\n");
	}
	if(i==4)
	{
		printf("16G-U盘\n");
	}
	return 0;
}