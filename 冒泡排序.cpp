#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	int temp;
	printf("Ϊ���鸳ֵ��\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)
			if(a[j]<a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");

	}
	return 0;
}
