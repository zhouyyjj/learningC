//while循环猜数字
#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个数：\n");

	while(num!=147)
	{
		scanf("%d",&num);//数据属于循环，要放在循环内部
		if(num>147)
		{
			printf("猜大了！\n");
		}
		else if(num<147)
		{
			printf("猜小了！\n");

		}
		else if(num==147)
		{
			printf("猜对了！\n");
		}
	}
	return 0;
}
