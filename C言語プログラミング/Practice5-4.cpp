
/*
	キーボードから入力した二つの数字の最大公約数を表示する。
	なお、最大公約数を求めるのに、kouyakusu()関数という再起関数を利用する。
	二つの数xとyの最大公約数を求める手順（ユークリッドの互助方）
	まず、x÷yの余りを求める。「余り≠０」なら、「x←y」「y←余り」として
	「余り＝０」になるまでx ÷ yを繰り返す。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 最大公約数を求める関数 */
int kouyakusu(int x, int y)
{
	int amari;
	printf("%3d　÷　%3d =　　%d 余り　　%2d\n", x, y, x / y, x % y);

	amari = x % y;

	if (amari == 0)
	{
		return y;
	}
	else
	{
		return kouyakusu(y, amari);
	}
}

int main()
{
	int suuji1 = 0, suuji2 = 0;				/* 数字１、数字２ */
	int kotae = 0;							/* 答え */

	/* 入力処理 */
	printf("------最大公約数を求める関数------\n");
	printf("1つ目の数字を入力してください：");	scanf("%d", &suuji1);
	printf("2つ目の数字を入力してください：");	scanf("%d", &suuji2);

	/*
		最大公約数を求める関数(kouyakusu)に上記の数字を引数として実行し
		戻り値(kotae)を受け取り、表示する 
	*/
	kotae = kouyakusu(suuji1, suuji2);
	printf("最大公約数は%dです。\n", kotae);
	printf("---------------------------------\n");

	getchar();
	getchar();
	return 0;
}