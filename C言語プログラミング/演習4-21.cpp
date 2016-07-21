
/*
	演習4-21

	右に示すように、読み込んだ整数を辺の長さとしてもつ正方形を表示するプログラムを作成せよ。

	＜出力結果＞

	正方形を作ります。
	何段ですか：3
	***
	***
	***
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("正方形を作ります。");
	printf("何段ですか：");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= len; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}