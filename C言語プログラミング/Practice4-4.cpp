
/*  
	金額を入力して10000円～1円の金種表を作成する。2000円札は考えない。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int kinshu_t[10] = { 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};/* 金種テーブル　*/
	int maisu_t[10] = { 0 };										 /* 枚数テーブル */
	int kingaku = 0, amari = 0, i = 0;								 /* 金額、残金 */



	/* 入力処理 */
	printf("------------------金額表計算------------------\n");
	printf("金額を入力してください―――＞");	scanf("%d", &kingaku);
	
	/* 残額に金額を入れる */
	amari = kingaku;

	/* 金種計算 */
	for (i = 0; i < 9; i++)
	{
		/* ①枚数(i)　＝　残額　÷　金種(i) */
		maisu_t[i] = amari / kinshu_t[i];
		/* 上記の余りを残額に格納 */
		amari = amari % kinshu_t[i];
	}
	/* 金種表示(for文を使用) */
	for (i = 0; i < 9; i++)
	{
		printf("　　　　　%5d 円：　　　%2d 枚\n", kinshu_t[i], maisu_t[i]);
	}

	printf("----------------------------------------------\n");

	getchar();
	getchar();
	return 0;
}