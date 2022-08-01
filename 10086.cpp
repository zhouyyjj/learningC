//场景模拟
#include<stdio.h>
int main()
{
	char ch;
	int i=100;
	int m;
	printf("您是否为移动电话用户（输入Y或N）:\n");
	scanf("%c",&ch);
	printf("请输入您需要的服务（0是人工服务，1是查询余额）\n");
	scanf("%d",&m);
	switch(m)
	{
	case 0:
		printf("正在转接人工服务\n");
		break;
	case 1:
		printf("话费查询\n");
		printf("您的话费为%d\n",i);
			break;
	default:
		printf("未开通服务\n");
	}
	if(ch=='N')
	{
		printf("您不是移动电话用户\n");
	}
	else
	{
		printf("请继续操作\n");
	}

	return 0;

}