//ģ���Զ�������
#include<stdio.h>
int main()
{
	int i=1;
	printf("��ѡ������Ҫ�����ϣ�3Ԫ��5Ԫ��7Ԫ����\n");
	scanf("%d",&i);
	do
	{
		i--;
		printf("����Ͷ��%dԪ\n",i);
	}while(i>0);
	return 0;

}