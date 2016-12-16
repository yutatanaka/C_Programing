
/*  
	編集(Henshu)関数のソースファイル
*/

/* 数字を文字に編集処理 */
void Henshu(int suuji, char *moji)
{
	int i, j, k;
	int suuji0 = 0, suuji1 = 0;				/* 数字0、数字１ */
	char suuji_t[] = "0123456789";			/* 数字テーブル */
	char mojiretu[13] = { 0 };				/* 文字列テーブル */

	/* ①0未満(マイナス)ならプラスにして数字0(suuji0)に格納する */
	if (suuji < 0)
	{
		suuji0 = 0 - suuji;
	}
	/* ②0以上ならそのまま数字０(suuji0)へ */
	else
	{
		suuji0 = suuji;
	}

	/* ③カウンタiが13未満で、数字０(suuji0)が0でない間は、次の④～⑥を繰り返す */
	for (i = 0, j = 0; i < 13 && suuji0 != 0; i++, j++)
	{
		/* ④数字0を10で割り、商を数字0(suuji0)へ、余りを数字1(suuji1)へ格納する */
		suuji1 = suuji0 % 10;
		suuji0 = suuji0 / 10;

		/* 数字1(suuji1)を文字に変換し文字列(mojiretu)へ格納する */
		mojiretu[j] = suuji_t[suuji1];

		/* 数字0(suuji0)が0でないときは、３桁ごと「(i + 1) % 3 == 0」に添え字jを+１し、カンマを文字列へ格納する */
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

	/* 文字列の最後に'\0'を格納する */
	mojiretu[j] = '\0';

	/* 文字列(mojiretu)を最終結果の文字(moji)に変換する
	このときmojiretuの添え字をiとしmojiの添え字をkとする*/
	k = j - 1;
	for (i = 0; mojiretu[i] != '\0'; i++)
	{
		j = k - i;
		*(moji + j) = mojiretu[i];
	}
	*(moji + i) = '\0';
}