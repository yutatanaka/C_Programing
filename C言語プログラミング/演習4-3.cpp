
/*
	演習4-3

	負の値を読み込んだときに改行文字を出力しないように、List4-5のプログラムを書きかえよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}

	if (no <= 0)
	{
		/* 何もしない */
	}

	getchar();
	return 0;
}