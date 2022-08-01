//输入时间，当时间小于12，输出Good morning,当时间为12，输出，Good noon，否则输出Good everning
#include<stdio.h>
int main()
{
	int time;
	printf("请输入时间：\n");
	scanf("%d",&time);
	if(time<12&&time>0)
	{
		printf("Good morning!\n");
	}
	if(time==12)
	{
		printf("Good noon!\n");
	}
	else
	{
		printf("Good everning!\n");
	}
	return 0;
}