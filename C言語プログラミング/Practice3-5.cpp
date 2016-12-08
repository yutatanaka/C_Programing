
/*
	氏名が”end”になるまで、氏名と点数を入力する。
	データがなくなったら点数にて順位付けを行い、氏名、点数、順位を表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int kensu = 0, tensu = 0;				/* 件数、点数 */
	char simei[10] = { 0 };					/* 氏名 */
	int tensu_t[10] = { 0 };				/* 点数テーブル */
	char simei_t[20][10] = { 0 };			/* 氏名テーブル */
	int juni_t[10] = { 0 };					/* 順位テーブル */

	/* 入力処理 */
	printf("氏名：");	scanf("%s", simei);
	printf("点数：");	scanf("%d", &tensu);
	/* 氏名が"end"になるまで次の処理を繰り返す(while文を使用) */
	while (strcmp(simei, "end") != 0)
	{
		/* 氏名を氏名テーブル(simei_t)の該当箇所に(件数を添え字にして)格納する　*/
		strcpy(simei_t[kensu], simei);
		/* 点数を点数テーブル(tensu_t)の該当箇所に(件数を添え字にして)格納する */
		tensu_t[kensu] = tensu;
		/* 順位テーブル(juni_t)の該当箇所に(件数を添え字にして)１を格納する */
		juni_t[kensu] = 1;	
		/* 二件目以降の氏名を入力する */
		printf("氏名：");	scanf("%s", simei);
		/* 氏名が"end"でなければ、点数を入力する */
		if (strcmp(simei, "end") != 0)
		{
			printf("点数：");	scanf("%d", &tensu);
			/* 件数に１を加算する */
			kensu++;
		}

	}
	
	/* 順位づけ(他より小さいとき順位に1を加える) */
	for (int i = 0; i <= kensu; i++)
	{
		for (int j = 0; j <= kensu; j++)
		{
			if (tensu_t[i] < tensu_t[j])
			{
				juni_t[i]++;
			}
		}
	}

	/* 見出しを表示する */
	printf("_______________________________\n");
	printf("　　氏名　　　点数　　順位\n");
	printf("-------------------------------\n");
	/* 氏名、点数、順位の表示(格納した件数分繰り返す)(for文を使用) */
	for (int k = 0; k <= kensu; k++)
	{
		printf("　　%-5s　　　　%3d　　%d\n", simei_t[k], tensu_t[k], juni_t[k]);
	}
	/* フッターを表示する */
	printf("===============================\n");

	getchar();
	getchar();
	return 0;
}