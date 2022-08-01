//某班级学习委员整理获得奖学金排名，总成绩=智育成绩*60%+德育成绩*30%+体育成绩*10%，使用冒泡排序将班级前12名同学的成绩排序
#include<stdio.h>
int main()
{
	float a[12];
	float temp;
	int i,j;
	int zy[12],dy[12],ty[12];
	printf("请输入智育成绩：\n");
	for(i=0;i<12;i++)
	{
		printf("zy[%d]=",zy);
		scanf("%d",&zy[12]);
	}
	printf("请输入德育成绩：\n");
	for(i=0;i<12;i++)
	{
		printf("dy[%d]=",dy);
		scanf("%d",&dy[12]);
	}
	printf("请输入体育成绩：\n");
	for(i=0;i<12;i++)
	{
		printf("ty[%d]=",ty);
		scanf("%d",&ty[12]);
	}
	for(i=0;i<12;i++)
	{
		a[i]=(float)(zy[i]*0.6+dy[i]*0.3+ty[i]*0.1);

	}
	for(i=1;i<12;i++)
	{
		for(j=11;j>=1;j--)
		{
			if(a[j]<a[j-i])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<12;i++)
	{
		printf("%f\t",a[i]);
		if(i==4)
			printf("\n");
	}
	return 0;
}