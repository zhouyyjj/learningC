//��������ַ�������ʾ�ַ����ĳ���
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
		printf("�ַ�������Ϊ%d\n",word);
		return 0;
}