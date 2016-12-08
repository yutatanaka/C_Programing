
/* 
	年齢の上限と下限を入力すると、その範囲の社員番号、社員名、年齢を表示する。
	テーブルは次の通りにする。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int shain_no_t[11] = { 1001, 1002, 1005, 1010, 1012, 1013, 1015, 1020, 1021, 1022, 9999 };					/* 社員番号テーブル */
	char shain_mei_t[][10] = { "鈴木", "井上", "山本", "田川", "田中", "松田", "木下", "上野", "岡本", "吉永" };	/* 社員名テーブル */
	int nenrei_t[10] = { 53, 42, 39, 28, 30, 25, 24, 31, 20, 18 };												/* 年齢テーブル */	
	int jougen = 0, kagen = 0, kensu = 0;																		/* 上限、下限、件数 */

	/* 入力処理 */
	printf("-------------------社員検索-------------------\n");
	printf("年齢の上限を入力してください--->");	scanf("%d", &jougen);
	printf("年齢の下限を入力してください--->");	scanf("%d", &kagen);
	
	/* テーブル検索(for文を使用) */
	for (int i = 0; shain_no_t[i] < 9999; i++)
	{
		/* 年齢テーブルの内容が上限と下限の範囲の場合は、各テーブルの社員番号、社員名、年齢を表示し、件数に１を加算する */
		if (nenrei_t[i] <= jougen && nenrei_t[i] >= kagen)
		{
			printf("対象者　社員番号＝%d　社員名＝%s　年齢＝%d\n", shain_no_t[i], shain_mei_t[i], nenrei_t[i]);
			kensu++;
		}
	}
	if (kensu != 0)
	{
		printf("以上%d名です。\n", kensu);
	}
	else
	{
		printf("対象者はいません。\n");
	}

	getchar();
	getchar();
	return 0;
}