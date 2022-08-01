//将华氏度转化为摄氏度，摄氏度=5*（华氏度-32）/9
#include<stdio.h>
int main()
{
	int C,F;
	printf("请输入华氏度：\n");
	scanf("%d",&F);
	C=5*(F-32)/9;
	printf("摄氏度为%d度\n",C);
	return 0;
}
