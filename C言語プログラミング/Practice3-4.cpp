
/*  
	営業所が"end"になるまで、営業所と売上金額[単位：千円]を入力する
	データがなくなったら売上金額にて順位付けを行い、営業所、売上金額、順位を表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, uriage = 0;			/* 件数、売上 */
	int uriage_t[10] = { 0 };			/* 売上テーブル */
	int juni_t[10] = { 0 };				/* 順位テーブル */
	char eigyousyo[20] = { 0 };			/* 営業所 */
	char eigyousyo_t[10][20] = { 0 };	/* 営業所テーブル */

	printf("営業所：");		scanf("%s", eigyousyo);
	printf("売上：");		scanf("%d", &uriage);
	/* 営業所が"end"になるまで次の処理を繰り返す(while文を使用) */
	while (strcmp(eigyousyo, "end") != 0)
	{
		/* 営業所を営業所テーブル(eigyousyo_t)の該当箇所に(件数を添え字)格納する */
		strcpy(eigyousyo_t[kensu], eigyousyo);
		/* 売上を売上テーブル(uriage_t)の該当箇所に(件数を添え字)格納する */
		uriage_t[kensu] = uriage;
		/* 順位テーブル */
		juni_t[kensu] = 1;
		/* 件数に1を加算する */
		kensu++;
		/* 2件目以降の営業所を入力する */
		printf("営業所：");	scanf("%s", eigyousyo);
		/* 営業所が"end"でなければ、売上を入力する */
		if (strcmp(eigyousyo, "end") != 0)
		{
			printf("売上：");	scanf("%d", &uriage);
		}
	}
	for (int i = 0; i <= kensu; i++)
	{
		for (int j = 0; j <= kensu; j++)
		{
			if (uriage_t[i] < uriage_t[j])
				juni_t[i]++;
		}
	}

	/* 見出しを表示する */
	printf("___________________________________\n");
	printf("　　　営業所　　　売上金額　　順位\n");
	printf("--------------------------------\n");

	/* 営業所、売上金額、順位の表示(格納した件数分繰り返す)(for文を使用) */
	for (int i = 0; i <= kensu - 1; i++)
	{
		printf("　%-10s　　%-8d　　%d\n", eigyousyo_t[i], uriage_t[i], juni_t[i]);
	}
	printf("=================================\n");

	getchar();
	getchar();
	return 0;
}