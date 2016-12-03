
/* 
	担当者名が"end"になるまで、担当者名と売上を入力する。売上合計を求める。
	各担当の売上が売上合計の何％になるかの比率の計算を行い、担当者名、売上、比率を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, uriage = 0;		/* 件数、合計、比率、売上*/
	int i = 0;
	double ritu = 0;
	char tanto[10] = { 0 };					/* 担当者名 */
	char tanto_t[20][10] = { 0 };			/* 担当者テーブル */
	int uriage_t[10] = { 0 };				/* 売上テーブル */

	/* 入力処理 */
	printf("担当者名が「 end 」で終了\n");
	printf("%d人目の担当者名：", ++i);	scanf("%s", tanto);
	printf("%d人目の売上：", i);		scanf("%d", &uriage);

	/* 担当者名が"end"になるまで次の処理を繰り返す */
	while (strcmp(tanto, "end") != 0)
	{
		/* 売上を合計に加算する */
		goukei += uriage;
		/* 売上を売上テーブル(uriage_t)の該当箇所に(件数を添え字)格納する */
		uriage_t[kensu] = uriage;
		/* 担当者名を担当者名テーブル(tantou_t)の該当箇所に(件数を添え字)格納する */
		strcpy(tanto_t[kensu], tanto);
		/* 件数に１を加算する */
		++kensu;
		/* 二人目以降の担当者名を入力する */
		printf("%d人目の担当者名：", ++i);	scanf("%s", tanto);
		/* 担当者名が"end"でなければ売上を入力する */
		if (strcmp(tanto, "end") != 0)
		{
			printf("%d人目の売上：", i);	scanf("%d", &uriage);
		}
	}
	printf("\n");
	
	/* 合計の格納と見出しの表示 */

	/* 担当者名テーブルの最後に(件数を添え字) "合計"を格納する。 */
	strcpy(tanto_t[kensu], "合計");
	uriage_t[kensu] = goukei;
	/* 見出しを表示する */
	printf("____________________________________________\n");
	printf("\t担当者\t\t売上\t比率\t\n");
	printf("--------------------------------------------\n");
	/* 率の計算と明細の表示(格納した件数分繰り返す) */
	for (int k = 0; k <= kensu; k++)
	{
		ritu = (double)uriage_t[k] * 100.0 / (double)goukei;
		printf("\t%s\t\t%5d\t%f%\t\n", tanto_t[k], uriage_t[k], ritu);
	}
	printf("============================================\n");

	getchar();
	getchar();
	return 0;
}
