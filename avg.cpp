//�Ƚ��ɼ��������飬����ƽ���ɼ�
#include<stdio.h>
int main()
{
	int score[10]={98,75,69,84,52,79,65,97,93,81};
	int total=0;
	int i;
	float avg;
	for(i=0;i<10;i++)
	{
		total+=score[i];
	}
	avg=((float)total/10);
	printf("ƽ���ɼ�Ϊ��%f\n",avg);
	return 0;
}