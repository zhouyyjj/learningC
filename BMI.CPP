//判断BMI
#include<stdio.h>
int main()
{
	double BMI;
	printf("请输入您的BMI:\n");
	scanf("%lf",&BMI);
	if(BMI<18.5)
	{
		printf("偏瘦\n");
	}
	if(BMI>=18.5&&BMI<25)
	{
		printf("正常\n");
	}
	if(BMI>=25&&BMI<30)
	{
		printf("偏重\n");
	}
	if(BMI>=30)
	{
		printf("肥胖\n");
	}
	return 0;
}

