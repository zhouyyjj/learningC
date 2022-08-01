//周末去哪玩
#include<stdio.h>
int main()
{
	int day;
	int Monday=1,Tuesday=2,Wednesday=3,Thursday=4,Friday=5,Saturday=6,Sunday=7;
	printf("请输入一天：\n");
	scanf("%d",&day);
	if(day>Friday)
	{
		if(day==Saturday)
		{
			printf("go shopping with friends\n");
		}
		else if(day==Sunday)
		{
			printf("at home\n");
		}
	}
	else
	{
		if(day==Monday)
		{
			printf("have a meeting\n");
		}
		else
		{
			printf("working\n");
		}
	}
	return 0;
}
