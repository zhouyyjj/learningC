//创建一个数组，用来保存手机号
#include<stdio.h>
int main()
{
	int num[5],i;
	printf("请输入你的手机号码：\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("手机号码为：\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",&num[i]);
	}
	printf("\n");
	return 0;
}