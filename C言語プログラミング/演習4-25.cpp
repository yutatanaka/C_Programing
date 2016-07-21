
/*
	演習4-25

	右に示すように、読み込んだ数の段数をもつ下向き数字ピラミッドを表示するプログラムを作成せよ。
	第i行目にはi % 10によって得られる数字を表示すること。

	<出力結果>

	下向き数字ピラミッドを作ります。
	何段ですか：3
	11111
	 222
	  3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, n;

	puts("下向き数字ピラミッドを作ります。");
	printf("何段ですか：");   scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		for (j = 1; j <= 2 * (n - i) + 1; j++)
		{
			printf("%d", i % 10);
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}