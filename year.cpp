//����һ�����ų�������¼һ���е���Сʱ������ÿ��365����㣩���û��������һ��Сʱ�����������ʾ��ȥ������
#include<stdio.h>
#define Hour_years��365*24��
int main()
{
	float hours;
	printf("������Сʱ����\n");
	scanf("%f",&hours);
	printf("�Ѿ�����%3f��\n"��hours/Hour_years);
	return 0;
}
