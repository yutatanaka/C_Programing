
/*
演習4-10

読み込んだ整数値の個数だけ*を縦に連続して表示するプログラムを作成せよ。
なお、0以下の整数が入力された場合は、何も表示しないこと。

<出力結果>

正の整数：3
*
*
*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	printf("正の整数：");
	scanf("%d", &num);

	i = 0;

	if (num > 0)
	{
		while (i < num)
		{
			printf("*\n");
			i++;
		}
	}

	getchar();
	return 0;
}