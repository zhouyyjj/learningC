//���㲻ͬ���ͱ�����ӵ�ֵ�����㣨10+'a'��-1.5+3.2*6��ֵ
#include<stdio.h>
int main()
{
	int i=10,f=6;
	char m='a';//ASCLL�룬A-Z��Ӧ65-90��a-z��Ӧ97-122
	float q=1.5f,p=3.2f;
	double count;
	count=(i+m)-q+p*f;
	printf("%f\n",count);
	return 0;
}