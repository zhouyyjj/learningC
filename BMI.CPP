//?ж?BMI
#include<stdio.h>
int main()
{
	double BMI;
	printf("??????????BMI:\n");
	scanf("%lf",&BMI);
	if(BMI<18.5)
	{
		printf("ƫ??\n");
	}
	if(BMI>=18.5&&BMI<25)
	{
		printf("????\n");
	}
	if(BMI>=25&&BMI<30)
	{
		printf("ƫ??\n");
	}
	if(BMI>=30)
	{
		printf("????\n");
	}
	return 0;
}

