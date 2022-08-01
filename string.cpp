//随机输入字符串，显示字符串的长度
#include<stdio.h>
int main()
{
	char string[100];
	int i;
	int word=0;
	gets(string);
	if(string[0]=='\0')
		word=0;
	else
		for(i=0;string[i]!='\0';i++)
			word++;
		printf("字符串个数为%d\n",word);
		return 0;
}