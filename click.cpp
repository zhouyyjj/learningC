//��������click�������ڼ�¼�û����������������static����sum=0��ÿ�ε���sumֵ��1��������Σ��鿴��ʱ�����
#include<stdio.h>
void click()//��������
{
	static int sum=0;
	sum=sum+1;
	printf("sum��ֵΪ%d\n",sum);
}

int main()
{
	click();//��һ�ε���
	click();//�ڶ��ε���
	click();
	click();
	click();
}