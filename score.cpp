//�����鱣��ѧ���ɼ�
#include<stdio.h>
int main()
{
	int score[3],i;//iΪ����ѭ���ı���
	printf("���������ġ���ѧ��Ӣ��ɼ���\n");
	for(i=0;i<3;i++)//�������Ԫ��
	{
		scanf("%d",&score[i]);
	}
	printf("���ġ���ѧ��Ӣ��ɼ��ֱ��ǣ�\n");
	for(i=0;i<3;i++)//���Ԫ��
	{
		printf("%d\t",score[i]);
	}
	printf("\n");
	return 0;
}