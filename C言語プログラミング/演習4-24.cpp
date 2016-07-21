
/*
	演習4-24

	右に示すように、読み込んだ整数の段数をもつピラミッドを表示するプログラムを作成せよ。
	ヒント：第i行目には(i - 1) * 2 + 1個の'*'記号を表示することになる。

	<出力結果>

	ピラミッドを作ります。
	何段ですか：3
	  *
	 ***
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, n;

	puts("ピラミッドを作ります。");
	printf("何段ですか：");   scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = n - i; j > 0; j--)
			putchar(' ');
		for (j = 1; j <= (i - 1) * 2 + 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}