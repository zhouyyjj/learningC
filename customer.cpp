//���ݹ˿͹���СƱ�ϵ����ѽ������˿ͽ������ܵ����ۿۺʹ��ۺ���Ҫ֧���Ľ��
#include<stdio.h>
int main()
{
	int amount;
	float i=0.9f,j=0.8f,k=0.7f,m=0.6f;
	float sum;
	printf("���������ѽ�\n");
	scanf("%d",&amount);
	switch(amount)
	{
	case 0:
		printf("�ù˿Ͳ������Ż�:\n");
		sum=amount;
		printf("�ù˿���������%.2f\n",sum);
		break;
	case 500:
		printf("�ù˿����ܾ����Ż�:\n");
		sum=amount*i;
		printf("�ù˿���������%.2f\n",sum);
		break;
	case 1000:
		printf("�ù˿����ܰ����Ż�:\n");
		sum=amount*j;
		printf("�ù˿���������%.2f\n",sum);
		break;
	case 2000:
		printf("�ù˿����������Ż�:\n");
		sum=amount*k;
		printf("�ù˿���������%,2f\n",sum);
		break;
	case 3000:
		printf("�ù˿����������Ż�:\n");
		sum=amount*m;
		printf("�ù˿���������%,2f\n",sum);
		break;
	}
	return 0;
}