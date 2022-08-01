//根据顾客购物小票上的消费金额输出顾客将会享受到的折扣和打折后需要支付的金额
#include<stdio.h>
int main()
{
	int amount;
	float i=0.9f,j=0.8f,k=0.7f,m=0.6f;
	float sum;
	printf("请输入消费金额：\n");
	scanf("%d",&amount);
	switch(amount)
	{
	case 0:
		printf("该顾客不享受优惠:\n");
		sum=amount;
		printf("该顾客最终消费%.2f\n",sum);
		break;
	case 500:
		printf("该顾客享受九折优惠:\n");
		sum=amount*i;
		printf("该顾客最终消费%.2f\n",sum);
		break;
	case 1000:
		printf("该顾客享受八折优惠:\n");
		sum=amount*j;
		printf("该顾客最终消费%.2f\n",sum);
		break;
	case 2000:
		printf("该顾客享受七折优惠:\n");
		sum=amount*k;
		printf("该顾客最终消费%,2f\n",sum);
		break;
	case 3000:
		printf("该顾客享受六折优惠:\n");
		sum=amount*m;
		printf("该顾客最终消费%,2f\n",sum);
		break;
	}
	return 0;
}