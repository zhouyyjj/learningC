#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("������һ��С��100������\n");
	scanf("%d",&i);
	while(i<=100)
	{
		
		if(i<=100)
		{
			sum+=i;
			i++;
			printf("���Ϊ%d\n",sum);
		}
		else
		{
			printf("error!\n");
		}
	}
	return 0;
	
}