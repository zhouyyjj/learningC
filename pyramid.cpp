//输出金字塔的形状
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)//给i赋值，行数
	{
		for(j=1;j<=5-i;j++)//给j赋值，第一行开头一个空格，空格数
			printf(" ");
		for(k=1;k<=2*i-1;k++)//找到每行*号数量的规律
			printf("*");
		printf("\n");//每一次循环后换行
	}
	return 0;
}
