//���㾭���������İ�Ԫ��
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
							printf("����%dֻ,��ĸ%dֻ,����%dֻ\n",cock,hen,chick);
						return 0;

}
//����ȫ�򹫼������20ֻ��ȫ��ĸ�����33ֻ��ȫ��С�����99ֻ��С�����������ı���
//1.���ּ��ļ۸�Ϊ100 2.���ּ�������Ϊ100 3.С�������ı���
