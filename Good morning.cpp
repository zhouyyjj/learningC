//����ʱ�䣬��ʱ��С��12�����Good morning,��ʱ��Ϊ12�������Good noon���������Good everning
#include<stdio.h>
int main()
{
	int time;
	printf("������ʱ�䣺\n");
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