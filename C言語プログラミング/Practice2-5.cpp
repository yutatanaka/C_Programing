
/*
	担当者が"end"になるまで、担当者名と売上を入力する。
	売上合計、平均、最も売り上げが多い担当者名とその売上を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, heikin = 0;					/* 件数、合計、平均 */
	int uriage = 0, max_uriage = 0, min_uriage = 0;	/* 売上、最高売上、最低売上 */
	char tanto[10], max_tanto[10], min_tanto[10];			/* 担当、最高売上担当、最低売上担当 */
	int i = 0;

	/* 前処理 */
	printf("担当者名がendで終了\n");
	printf("%d人目の担当者名＝",++i);	scanf("%s", tanto);
	printf("%sの売上＝", tanto);	scanf("%d", &uriage);

	strcpy(max_tanto, tanto);
	strcpy(min_tanto, tanto);
	max_uriage = uriage;
	min_uriage = uriage;

	/* 担当者が"end"になるまで次の処理を繰り返す */
	while (strcmp(tanto, "end") != 0)
	{
		/* 売上を合計に加算する */
		goukei += uriage;
		/* 件数に１を加算する */
		++kensu;
		/* 売上が最高売上より大きければ売上を最高売上とし、担当を最高売上担当とする。 */	
		if (uriage > max_uriage)
		{
			max_uriage = uriage;
			strcpy(max_tanto, tanto);
		}
		/* 売上が最低売上より小さければ売上を最低売上とし、担当を最低売上担当とする。 */
		else if (uriage < min_uriage)
		{
			min_uriage = uriage;
			strcpy(min_tanto, tanto);
		}
		/* 二人目以降の担当者名を入力する */
		printf("%d人目の担当者名＝", ++i);	scanf("%s", tanto);
		/* 担当者名が"end"でなければ */
		if (strcmp(tanto, "end") != 0)
		{
			printf("%sの売上＝", tanto);	scanf("%d", &uriage);
		}
	}

	/* 平均を求める */
	heikin = goukei / kensu;
	/* 合計、平均を表示する */
	printf("合計＝%d  平均＝%d\n", goukei, heikin);
	/* 売上最高担当者名と最高売上を表示する */
	printf("売上最高担当者は%sで金額は%d\n", max_tanto, max_uriage);
	/* 売上最低担当者名と最低売上を表示する */
	printf("売上最低担当者は%sで金額は%d\n", min_tanto, min_uriage);

	getchar();
	getchar();
	return 0;
}