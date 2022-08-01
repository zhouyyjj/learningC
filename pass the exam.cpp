//用两个if判断是否通过考试
#include<stdio.h>
int main()
{
	int score;
	printf("请输入你的考试成绩：\n");
	scanf("%d",&score);
	if(score>=60)
	{
		printf("your grade is %d\n");
		printf("Pass!\n");
	}
	if(score<60)
	{
		printf("No!\n");
	}
	return 0;
}
