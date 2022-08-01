//计算函数
#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入x的值：\n");
	scanf("%d",&x);
	if(x<1)
	{
		y=x;
		printf("y=%d\n",y);
	}
	else if(1<=x&&x<=10)
	{
		y=2*x-1;
		printf("y=%d\n",y);
	}
	else if(x>=10)
	{
		y=3*x-11;
		printf("y=%d\n",y);
	}
	return 0;

}
