//����ģ��
#include<stdio.h>
int main()
{
	char ch;
	int i=100;
	int m;
	printf("���Ƿ�Ϊ�ƶ��绰�û�������Y��N��:\n");
	scanf("%c",&ch);
	printf("����������Ҫ�ķ���0���˹�����1�ǲ�ѯ��\n");
	scanf("%d",&m);
	switch(m)
	{
	case 0:
		printf("����ת���˹�����\n");
		break;
	case 1:
		printf("���Ѳ�ѯ\n");
		printf("���Ļ���Ϊ%d\n",i);
			break;
	default:
		printf("δ��ͨ����\n");
	}
	if(ch=='N')
	{
		printf("�������ƶ��绰�û�\n");
	}
	else
	{
		printf("���������\n");
	}

	return 0;

}