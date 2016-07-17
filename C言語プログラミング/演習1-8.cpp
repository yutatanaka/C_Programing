
/*
	演習1-8

	右に示すように、読み込んだ二つの整数値の積を表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数1：27
	整数2：35
	それらの積は945です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	int wa;

	puts("二つの整数を入力してください。");
	printf("整数1：");	scanf("%d", &n1);
	printf("整数2：");	scanf("%d", &n2);

	wa = n1 * n2;

	printf("それらの積は%dです。", wa);

	getchar();
	return 0;
}