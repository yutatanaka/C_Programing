
/*
	点数が999を超えるまで、点数を入力し、合計、平均、最高点数、最低点数を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int tensu = 0, kensu = 0, goukei = 0, heikin = 0;
	int max = 0, min = 0;

	printf("点数を入力してください。\n");
	printf("%d人目の点数：", ++kensu); scanf("%d", &tensu);
	max = tensu;
	min = tensu;

	/* 合計が999を超えるまで次の処理を繰り返す */
	while(goukei <= 999)
	{
		printf("%d人目の点数：", ++kensu);	scanf("%d", &tensu);

		/* 点数を合計に加算する */
		goukei += tensu;
		/* 点数が最高点数より大きければ点数を最高点数とする。*/
		if (tensu > max)
		{
			max = tensu;
		}
		/* 点数が最低点数より小さければ点数を最低点数とする。*/
		if (tensu < min)
		{
			min = tensu;
		}
	}

	/* 平均を求める */
	heikin = goukei / kensu;

	/* 合計、平均を表示する */
	printf("合計＝%d  平均＝%d\n", goukei, heikin);

	/* 最高得点と最低得点を表示する */
	printf("最高得点＝%d  最低得点＝%d", max, min);

	getchar();
	getchar();
	return 0;
}