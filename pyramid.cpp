//�������������״
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)//��i��ֵ������
	{
		for(j=1;j<=5-i;j++)//��j��ֵ����һ�п�ͷһ���ո񣬿ո���
			printf(" ");
		for(k=1;k<=2*i-1;k++)//�ҵ�ÿ��*�������Ĺ���
			printf("*");
		printf("\n");//ÿһ��ѭ������
	}
	return 0;
}
