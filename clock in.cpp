//模拟上班打卡，密码为111，密码正确出现“谢谢，已签到”
#include<stdio.h>
int main()
{
	int i;
	printf("请输入密码：\n");
	scanf("%d",&i);
	if(i==111)
	{
		printf("谢谢，已签到\n");
	}
	return 0;
}