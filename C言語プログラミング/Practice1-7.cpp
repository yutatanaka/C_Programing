
/*
	値引き区分、単価、数量を入力する。値引き区分が
	１のとき５％引き
	２のとき10%引き
	３のとき15%引き
	それ以外は値引きなし
	とし金額を算出し表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kubun = 0;
	int tanka = 0;
	int suryo = 0;
	int ritu = 0;
	int kingaku = 0;

	printf("値引き区分を入力:");	scanf("%d", &kubun);
	printf("単価を入力：");			scanf("%d", &tanka);
	printf("数量を入力：");			scanf("%d", &suryo);

	switch (kubun)
	{
	case 1:
		ritu = 5;
		break;
	case 2:
		ritu = 10;
		break;
	case 3:
		ritu = 15;
		break;
	default:
		ritu = 0;
		break;
	}
	/* 金額を算出 */
	kingaku = tanka * suryo * (100 - ritu) / 100;

	printf("値引率＝%d 金額＝%d\n", ritu, kingaku);

	getchar();
	getchar();
	return 0;
}