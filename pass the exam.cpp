//������if�ж��Ƿ�ͨ������
#include<stdio.h>
int main()
{
	int score;
	printf("��������Ŀ��Գɼ���\n");
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
