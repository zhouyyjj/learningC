//���ݾͲ���������λ�ã���if...else
#include<stdio.h>
int main()
{
	int people;
	printf("������Ͳ�������\n");
	scanf("%d",&people);
	if(people<=8)
	{
		printf("the people number are %d\n",people);
	}
	else
	{
		printf("please set up a large table\n");
	}
	return 0;
}