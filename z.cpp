//��д��������������ʽ�������˺ź����룬����˺��ǡ�������������Ϊ123�����¼�ɹ��������¼ʧ��
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
	char a[10]={"����"};
	char b[10]={"123"};
	printf("�������˺�����:\n");
	while(strcmp(account(),a)!=0||strcmp(possword(),b)!=0)
	{
		printf("error!\n");
	}
	printf("������ȷ������ϵͳ\n");
	return 0;
}