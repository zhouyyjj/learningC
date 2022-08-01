//用数组显示输出水果名字
#include<stdio.h>
int main()
{
	char ch[5]={'a','p','p','l','e'};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%c",ch[i]);
	}
	printf("\n");
	return 0;
}