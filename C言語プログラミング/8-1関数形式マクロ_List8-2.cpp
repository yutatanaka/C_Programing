
/*
	関数形式マクロ
	整数の2乗と浮動小数点の2乗(関数形式マクロ)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define sqr(x) ((x) * (x))		// xの2乗値を求める関数形式マクロ

int main()
{
	int n;
	double x;

	printf("整数を入力してください：");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr(n));

	printf("整数を入力してください：");
	scanf("%lf", &x);
	printf("その数の2乗は%fです。\n", sqr(x));

	getchar();
	getchar();
	return 0;
}