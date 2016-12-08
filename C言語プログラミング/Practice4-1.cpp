
/*  
	社員番号を入力すると社員名を表示する。社員番号と社員名は次の通りにする。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int shain_no_t[11] = { 1001, 1002, 1005, 1010, 1012, 1013, 1015, 1020, 1021, 1022, 9999};					/* 社員番号テーブル */
	char shain_mei_t[20][11] = { "鈴木", "井上", "山本", "田川", "田中", "松田", "木下", "上野", "岡本", "吉永" }; /* 社員名テーブル */
	char shain_mei[10] = { 0 };																					/* 社員名 */
	int shain_no = 0;																							/* 社員番号 */

	/* 入力処理 */
	printf("----------社員検索----------------\n");
	printf("社員番号を入力してください-->");	scanf("%d", &shain_no);
	printf("----------------------------------\n");

	/* 社員番号で社員番号テーブルを検索する(for文を使用) */
	for (int i = 0; shain_no_t[i] < 9999; i++)
	{
		/* 社員番号で社員番号テーブルにあったら、それに対応する社員名を社員名テーブルより格納する */
		if (shain_no == shain_no_t[i])
		{
			strcpy(shain_mei, shain_mei_t[i]);
		}
	}
	/* 社員名の表示 */
	if (strcmp(shain_mei, "") == 0)
	{
		printf("社員番号の登録がありません。\n");
	}
	else
	{
		printf("社員名は%sです。\n", shain_mei);
	}
	
	getchar();
	getchar();
	return 0;
}