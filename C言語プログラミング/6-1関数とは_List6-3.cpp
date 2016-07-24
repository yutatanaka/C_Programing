
/*
	関数の返却地を引数として関数に渡す

	二つの整数の2乗値の差を求める
	<出力結果>
	二つの整数を入力してください。
	整数x：4
	整数y：5
	xの2乗とyの2乗の差は9です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---xの2乗値を返す--- */
int sqr(int x)
{
	return x * x;
}

/* ---xとyの差を返す--- */
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* 大きいほうから小さいほうを引く */
}

int main()
{
	int x, y;

	puts("二つの整数を入力してください。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("xの2乗とyの2乗の差は%dです。\n", diff(sqr(x), sqr(y)));

	getchar();
	getchar();
	return 0;
	
}