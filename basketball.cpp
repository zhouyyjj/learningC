//某记分员记录了球员在10场篮球比赛中的成绩，输入数据后，求平均成绩
#include<stdio.h>
int main()
{
	int score[10]={7,5,6,8,6,4,8,9,7,8};
	int i;
	int total=0;
	float avg;
	for(i=0;i<10;i++)//保存数组，循环计算总成绩
	{
		total+=score[i];

	}
	avg=((float)total/10);
	printf("the avg is %f\n",avg);
	return 0;
}