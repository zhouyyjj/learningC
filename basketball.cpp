//ĳ�Ƿ�Ա��¼����Ա��10����������еĳɼ����������ݺ���ƽ���ɼ�
#include<stdio.h>
int main()
{
	int score[10]={7,5,6,8,6,4,8,9,7,8};
	int i;
	int total=0;
	float avg;
	for(i=0;i<10;i++)//�������飬ѭ�������ܳɼ�
	{
		total+=score[i];

	}
	avg=((float)total/10);
	printf("the avg is %f\n",avg);
	return 0;
}