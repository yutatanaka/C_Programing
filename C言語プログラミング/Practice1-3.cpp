
/* 
	区分と人数を入力する。区分が1(子供)のときは料金を800円、2(大人)のときは
	1500円とし、それに人数を掛けて料金合計を求め表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kubun = 0;
	int ninzu = 0;
	int goukei = 0;


	while (1)
	{
		printf("１：子供、２：大人　どちらかを選んでください：");	scanf("%d", &kubun);
		printf("人数を入力してください：");	scanf("%d", &ninzu);
		if (kubun == 1)
		{
			goukei = ninzu * 800;
			break;
		}
		else if (kubun == 2)
		{
			goukei = ninzu * 1500;
			break;
		}
		else
		{
			printf("間違った数字を選んでいます。もう一度選んでください。\n");
			continue;
		}
	}

	printf("料金合計＝%d", goukei);

	getchar();
	return 0;
}