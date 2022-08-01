//判断闰年，判断闰年的条件为能被4整除，但是不能被100整除，或者被400整除
#include<stdio.h>
int main()
{
	int year;
	printf("please enter a year:\n");
	scanf("%d",&year);
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		printf("%d is a leap year\n",year);
	}
	else
	{
		printf("%d is not a leap year\n",year);
	}
	return 0;
}