//模拟细菌分裂
#include<stdio.h>
int main()
{
	int num=1;
	int x=1;
	while(x<=12)
	{
		num=num*2;
		x++;
	}
	printf("第12代细菌数目为%d\n",num);

	return 0;
}