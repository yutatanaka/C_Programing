
/*
	三値の最大値

	三つの整数の最大値を求める
	<出力結果>
	三つの整数を入力してください。
	整数a：5
	整数b：3
	整数c：4
	最大値は5です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---三つの整数の最大値を返す--- */

int max3(int a, int b, int c)
{
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);
	printf("整数c：");   scanf("%d", &c);

	printf("最大値は%dです。\n", max3(a, b, c));

	getchar();
	getchar();
	return 0;
}