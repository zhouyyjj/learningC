//判断一个数是奇数还是偶数
#include<stdio.h>
int main()
{
	int number;
	printf("请输入一个数：\n");
	scanf("%d",&number);
	if(number%2==0)
		printf("the number is even number!\n");
	if(number%2!=0)
		printf("the number is odd number!\n");
	return 0;
}
