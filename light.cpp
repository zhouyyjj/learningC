//��·����ģʽ��switch��䣬��֪һ�����ݲ����������أ��ֱ��ǿ���1������2������3����һ���ʵƴ���һ������4������5�Ϳ���6����һ���׳�ƺͽ��ܵƣ����ⰴ�����أ��ĸ�������
#include<stdio.h>
int main()
{
	int s;
	printf("�����⿪һ�����أ�\n");
	scanf("%d",&s);
	switch(s)
	{
	case 1:
	case 2:
	case 3:
		printf("%d is ����\n",s);
		break;
	case 4:
	case 5:
		printf("%d is �ʵƴ�\n",s);
		break;
	case 6:
		printf("%d is �ʵƴ����׳�ƺͽ��ܵ�\n",s);
		break;
	default:
		printf("error!!\n");
	}
	return 0;
}