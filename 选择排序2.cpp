//把苹果重量按大到小排序
#include<stdio.h>
int main()
{
	int i,j;
	int a[5];
	int temp;
	int pos;
	printf("输入苹果重量：\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		temp=a[i];
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]>temp)
			{
				temp=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");
	}
	return 0;
}