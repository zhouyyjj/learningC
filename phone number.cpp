//����һ�����飬���������ֻ���
#include<stdio.h>
int main()
{
	int num[5],i;
	printf("����������ֻ����룺\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("�ֻ�����Ϊ��\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",&num[i]);
	}
	printf("\n");
	return 0;
}