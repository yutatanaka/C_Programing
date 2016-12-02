
/* 
	元金、利率、期間を入力し、元利合計の計算を行い表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int gankin = 0, ritu = 0, kikan = 0;					/* 元金、利率、期間 */
	int goukei = 0;											/* 合計 */
	int i;

	/* 入力処理 */
	printf("入力してください。\n");
	printf("元金(円)＝");	scanf("%d", &gankin);
	printf("利率(％)＝");	scanf("%d", &ritu);
	printf("期間(年)＝");	scanf("%d", &kikan);

	goukei = gankin;

	/* 期間の回数だけ次の処理を繰り返す */
	for (i = 1; i <= kikan; i++)
	{
		goukei = goukei * (100 + ritu) / 100;
	}

	/* 元利合計を表示する */
	printf("元利合計＝%d 円\n", goukei);

	getchar();
	getchar();
	return 0;
}