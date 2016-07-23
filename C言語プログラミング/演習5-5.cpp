
/*
	演習5-5

	List5-8の配列の要素数をオブジェクト形式マクロで定義するように変更したプログラムを作成せよ。
	要素の交換を行う回数に関する規則性を見つける必要がある

	<出力結果>
	x[0] : 15
	x[1] : 67
	x[2] : 28
	x[3] : 77
	x[4] : 35
	x[5] : 91
	x[6] : 83
	反転しました。
	x[0] : 83
	x[1] : 91
	x[2] : 35
	x[3] : 77
	x[4] : 28
	x[5] : 67
	x[6] : 15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7					/* x[]の配列数 */

int main()
{
	int i;
	int x[NUMBER];					/* int[NUMBER]型の配列 */

	for (i = 0; i < NUMBER; ++i)	/* 要素に値を読み込む */
	{
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; ++i)			/* 要素の並びを反転 */
	{
		int temp = x[i];
		x[i] = x[NUMBER - 1 - i];
		x[NUMBER - 1 - i] = temp;
	}

	puts("反転しました。");
	for (i = 0; i < NUMBER; ++i)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	getchar();
	getchar();
	return 0;
}