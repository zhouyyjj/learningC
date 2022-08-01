//多路开关模式的switch语句，已知一个灯泡并联三个开关，分别是开关1，开关2，开关3；另一个彩灯串联一个开关4，开关5和开关6并联一个白炽灯和节能灯，随意按个开关，哪个灯能亮
#include<stdio.h>
int main()
{
	int s;
	printf("请任意开一个开关：\n");
	scanf("%d",&s);
	switch(s)
	{
	case 1:
	case 2:
	case 3:
		printf("%d is 灯泡\n",s);
		break;
	case 4:
	case 5:
		printf("%d is 彩灯串\n",s);
		break;
	case 6:
		printf("%d is 彩灯串，白炽灯和节能灯\n",s);
		break;
	default:
		printf("error!!\n");
	}
	return 0;
}