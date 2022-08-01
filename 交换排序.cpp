//公司股票排名
#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	int temp;
	printf("为数组赋值：\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d}=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<12;i++)
	{
		printf("%d\t",i);
		if(i==4)
			printf("\n");
	}
	return 0;
}