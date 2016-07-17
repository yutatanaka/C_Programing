
/*
	演習2-2

	右に示すように、二つの整数値を読み込んで、その和と積を表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数a：54
	整数b：12
	それらの和は66で積は648です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int wa, seki;

	puts("二つの整数を入力してください。");
	printf("整数a：");	scanf("%d", &a);
	printf("整数b：");	scanf("%d", &b);

	wa = a + b;
	seki = a * b;

	printf("それらの和は%dで積は648です。", wa, seki);

	getchar();
	return 0;
}