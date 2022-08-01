//模拟银行取钱的场景
#include<stdio.h>
int main()
{
	int i;
	printf("请输入密码：\n");
	scanf("%d",&i);
	if(i==404328)
	{
		printf("you can take your money\n");
	}
	else
	{
		printf("Error!\n");
	}
	return 0;
}