//试着用putchar（）输出喵喵字符画（=^_^=）
#include<stdio.h>
int main()
{
	char c1,c2,c3;
	c1='=';
	c2='^';
	c3='_';

	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c2);
	putchar(c1);
	printf("\n");
	return 0;
}
//putchar一次只能输出一个字符，要多次输出，就要多次调用
