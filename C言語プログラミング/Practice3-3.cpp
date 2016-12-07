
/*
	氏名が"end"になるまで、氏名と点数を入力する。
	データがなくなったら点数の平均を算出する。
	平均と各人の点数を比較し、平均より20点以上下回っていたら"***"
	10点以上下回っていたら"**"
	1点以上下回っていたら"*"を備考欄に表示する。
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, tensu = 0, heikin = 0;	/* 件数、合計、点数、平均 */
	char simei[10] = { 0 };								/* 氏名 */
	int tensu_t[10] = { 0 };							/* 氏名テーブル */
	char simei_t[20][10] = { 0 };						/* 点数テーブル */
	char bikou[10] = { "     " };						/* 備考 */
	char bikou_t[20][10] = { 0 };						/* 備考テーブル */

	printf("氏名：");	scanf("%s", simei);
	printf("点数：");	scanf("%d", &tensu);

	/* 氏名が"end"になるまで次の処理を繰り返す */
	while (strcmp(simei, "end") != 0)
	{
		/* 点数を合計に加算する(累計) */
		goukei += tensu;
		/* 氏名を氏名テーブル(simei_t)の該当箇所に(件数を添え字)格納する */
		strcpy(simei_t[kensu], simei);
		/* 点数を点数テーブル(tensu_t)の該当箇所に(件数を添え字)格納する */
		tensu_t[kensu] = tensu;
		/* 件数に１を加算する(カウント) */
		++kensu;
		/* 2件目以降の氏名を入力する */
		printf("氏名：");	scanf("%s", simei);
		/* 氏名が"end"でなければ、点数を入力する */
		if (strcmp(simei, "end") != 0)
		{
			printf("点数：");	scanf("%d", &tensu);
		}
	}

	/* 合計の格納と見出し表示 */
	heikin = goukei / kensu;
	/* 氏名テーブルの最後に(件数を添え字) "平　均"を格納する*/
	strcpy(simei_t[kensu], "平均");
	/* 点数テーブルの最後に(件数を添え字)平均を格納する */
	tensu_t[kensu] = heikin;
	/* 見出しを表示する */
	printf("______________________________\n");
	printf("　　氏名　　　点数　　備考　　\n");
	printf("------------------------------\n");
	/* 氏名、点数、備考の表示(格納した件数分繰り返す)(for文を使用) */
	for (int i = 0; i <= kensu; ++i)
	{
		if (heikin - tensu_t[i] >= 20)
		{
			strcpy(bikou_t[i], "* * *");
		}
		else if (heikin - tensu_t[i] >= 10)
		{
			strcpy(bikou_t[i], "* *  ");
		}
		else if (heikin - tensu_t[i] >= 1)
		{
			strcpy(bikou_t[i], "*    ");
		}

		printf("　　%3s　　　%4d　　%5s　　\n", simei_t[i], tensu_t[i], bikou_t[i]);
	}

	printf("==============================\n");

	getchar();
	getchar();
	return 0;
}