//根据就餐人数分配位置，用if...else
#include<stdio.h>
int main()
{
	int people;
	printf("请输入就餐人数：\n");
	scanf("%d",&people);
	if(people<=8)
	{
		printf("the people number are %d\n",people);
	}
	else
	{
		printf("please set up a large table\n");
	}
	return 0;
}