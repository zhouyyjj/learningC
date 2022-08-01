//如果出租车收费标准按3元/千米计算，李女士去一个距离目的地十千米的地方，后来发现走错了，又坐出租车返回3千米，计算到目的地的开销
#include<stdio.h>
int main()
{
	int distance1=10,distance2=3;
	int money=3;
	int total;
	total=(distance1+distance2)*money;
	printf("李女士共花费%d元\n",total);
	return 0;
}
