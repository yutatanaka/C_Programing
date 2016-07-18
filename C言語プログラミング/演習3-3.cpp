
/*
	演習3-3

	右に示すように、整数値を読み込んで、その絶対値を表示するプログラムを作成せよ。

	<出力結果>

	整数を入力してください：-8
	絶対値は8です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	if (num < 0)
	{
		num = -num;
		printf("絶対値は%dです。", num);
	}
	else if (num >= 0)
	{
		num = num;
		printf("絶対値は%dです。", num);
	}

	getchar();
	return 0;
}