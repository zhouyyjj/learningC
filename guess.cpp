//whileѭ��������
#include<stdio.h>
int main()
{
	int num;
	printf("������һ������\n");

	while(num!=147)
	{
		scanf("%d",&num);//��������ѭ����Ҫ����ѭ���ڲ�
		if(num>147)
		{
			printf("�´��ˣ�\n");
		}
		else if(num<147)
		{
			printf("��С�ˣ�\n");

		}
		else if(num==147)
		{
			printf("�¶��ˣ�\n");
		}
	}
	return 0;
}
