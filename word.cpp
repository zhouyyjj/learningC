//统计字符串中单词的个数
#include<stdio.h>
int main()
{
	char string[100];
	int i,word=1;
	char blank;
	gets(string);
	
	if(string[0]=='\0')
	{
		printf("there is no char!\n");
	}
	else if(string[0]==' ')
	{
		printf("first char is a blank!\n");

	}
	else
	{
		for(i=0;string[i]!='\0';i++)
		{
			blank=string[i];
			if(blank==' ')
			{
				word++;
			}	
		}
		printf("%d\n",word);

	}
	return 0;
}