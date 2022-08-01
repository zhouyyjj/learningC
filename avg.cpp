//先将成绩存入数组，再求平均成绩
#include<stdio.h>
int main()
{
	int score[10]={98,75,69,84,52,79,65,97,93,81};
	int total=0;
	int i;
	float avg;
	for(i=0;i<10;i++)
	{
		total+=score[i];
	}
	avg=((float)total/10);
	printf("平均成绩为：%f\n",avg);
	return 0;
}