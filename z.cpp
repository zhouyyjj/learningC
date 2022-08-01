//编写函数，有两个形式参数：账号和密码，如果账号是“张三”，密码为123，则登录成功，否则登录失败
#include<stdio.h>
#include<string.h>
char*account()
{
	char m[10];
	gets(m);
	return m;
}
char*possword()
{
	char n[10];
	gets(n);
	return n;
}

int main()
{
	char a[10]={"张三"};
	char b[10]={"123"};
	printf("请输入账号密码:\n");
	while(strcmp(account(),a)!=0||strcmp(possword(),b)!=0)
	{
		printf("error!\n");
	}
	printf("密码正确，进入系统\n");
	return 0;
}