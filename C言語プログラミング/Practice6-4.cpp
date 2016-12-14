
/*
	数字(最大9桁)を入力し、3桁ごとにカンマを挿入し表示する。
	編集を行う関数名をhenshuとする。
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
void Henshu(int suuji, char *moji)
{
	int i, j, k;
	int suuji0 = 0, suuji1 = 0;			/* 数字0、数字1 */
	char suuji_t[] = "0123456789";		/* 数字テーブル */
	char mojiretu[13] = { 0 };			/* 文字列 */

	/* 受け取った数字(suuji)が0以上ならそのまま数字0(suuji0)へ */
	if (suuji > 0)
	{
		suuji0 = suuji;
	}
	/* 0未満(マイナス)ならプラスにして数字0(suuji0)に格納する */
	else if (suuji < 0)
	{
		suuji0 = 0 - suuji;
	}

	for (i = 0, j = 0; i < 13 && suuji0 != 0; i++, j++)
	{
		/* 数字0を10で割り、商を数字0(suuji0)へ、余りを数字1(suuji1)へ格納 */
		suuji1 = suuji0 % 10;
		suuji0 = suuji0 / 10;

		/* 数字1(suuji1)を文字に変換し文字列（mojiretu)へ格納 */
		mojiretu[j] = suuji_t[suuji1];

		/* 数字0(suuji0)が0でないときは、3桁ごと「 (i + 1) % 3 == 0 」
		　 に添え字jを+1し、カンマを文字列へ格納 */
		if ((i + 1) % 3 == 0 && suuji0 != 0)
		{
			j++;
			mojiretu[j] = ',';
		}
	}

	/* 数字(suuji)がマイナスのときはマイナス符号を文字列へ格納する */
	if (suuji < 0)
	{
		mojiretu[j] = '-';
		j++;
	}

	/* 文字列(mojiretu)の最後に'\0'を格納する */
	mojiretu[j] = '\0';

	/* 文字列(mojiretu)を最終結果の文字(moji)に変換する
	　 このときmojiretuの添え字をiとしmojiの添え字をkとする */
	k = j - 1;
	for (i = 0; mojiretu[i] != '\0'; i++)
	{
		j = k - i;
		*(moji + j) = mojiretu[i];
	}
	*(moji + i) = '\0';
}

int main()
{
	int suuji = 0;			/* 数字 */
	char moji[13] = { 0 };	/* 13文字まで格納できる文字配列 */

	/* 入力処理 */
	printf("数字(最大9桁)を入力してください------->");	scanf("%d", &suuji);

	/* 編集関数(henshu)を実行する */
	Henshu(suuji, moji);

	/* 編集された文字を表示する */
	printf("編集された数字------------------------>%s\n", moji);

	getchar();
	getchar();
	return 0;
}