//求圆的面积
#include<stdio.h>
#define PAI 3.14

int main()
{
	double r;
	double S;
	printf("请输入圆的半径：\n");
	scanf("%lf",&r);
	S=r*r*PAI;
	printf("圆的面积是%lf\n",S);
	return 0;
}
//定义一个符号常量，用define