//模拟自动售卖机
#include<stdio.h>
int main()
{
	int i=1;
	printf("请选择你需要的饮料（3元，5元，7元）：\n");
	scanf("%d",&i);
	do
	{
		i--;
		printf("还需投币%d元\n",i);
	}while(i>0);
	return 0;

}