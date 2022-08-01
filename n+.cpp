#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("请输入一个小于100的数：\n");
	scanf("%d",&i);
	while(i<=100)
	{
		
		if(i<=100)
		{
			sum+=i;
			i++;
			printf("结果为%d\n",sum);
		}
		else
		{
			printf("error!\n");
		}
	}
	return 0;
	
}