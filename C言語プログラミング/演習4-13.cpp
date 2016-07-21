
/*
	演習4-13

	1からnまでの和を求めるプログラムを作成せよ。
	nの値はキーボードから読み込むこと。

	<出力結果>

	nの値：5
	1から5までの和は15です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	int n, tmp;

	printf("nの値：");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		sum += i + 1;
	}

	printf("1から%dまでの和は%dです。", n, sum);
	getchar();
	return 0;
}