//强制类型转化，将数字转换为字符
#include<stdio.h>
int main()
{
	int num1=67,num2=68,num3=69;
	char c1,c2,c3;
	c1=(char)num1;
	c2=(char)num2;
	c3=(char)num3;
	printf("%c %c %c\n",c1, c2, c3);
	return 0;
}
//变量前使用包含要转化类型的括号，就可以强制转化
//float i=1.5f;
//int j=(int)i