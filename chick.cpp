//《算经》中著名的百元买鸡
#include<stdio.h>
int main()
{
	int cock,hen,chick;
	for(cock=0;cock<=20;cock++)
		for(hen=0;hen<=33;hen++)
			for(chick=3;chick<=99;chick++)
				if(5*cock+hen*3*chick/3==100)
					if(cock+hen+chick==100)
						if(chick%3==0)
							printf("鸡翁%d只,鸡母%d只,鸡雏%d只\n",cock,hen,chick);
						return 0;

}
//假设全买公鸡，最多20只，全买母鸡最多33只，全买小鸡最多99只，小鸡必须是三的倍数
//1.三种鸡的价格为100 2.三种鸡的数量为100 3.小鸡是三的倍数
