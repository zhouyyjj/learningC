//计算不同类型变量相加的值，计算（10+'a'）-1.5+3.2*6的值
#include<stdio.h>
int main()
{
	int i=10,f=6;
	char m='a';//ASCLL码，A-Z对应65-90，a-z对应97-122
	float q=1.5f,p=3.2f;
	double count;
	count=(i+m)-q+p*f;
	printf("%f\n",count);
	return 0;
}