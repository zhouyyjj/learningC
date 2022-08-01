//用数组保存学生成绩
#include<stdio.h>
int main()
{
	int score[3],i;//i为控制循环的变量
	printf("请输入语文、数学、英语成绩：\n");
	for(i=0;i<3;i++)//逐个输入元素
	{
		scanf("%d",&score[i]);
	}
	printf("语文、数学、英语成绩分别是：\n");
	for(i=0;i<3;i++)//输出元素
	{
		printf("%d\t",score[i]);
	}
	printf("\n");
	return 0;
}