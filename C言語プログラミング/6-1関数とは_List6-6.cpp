
/*
	値渡しその２

	べき乗を求める
	<出力結果>
	aのb乗を求めます。
	実数a：4.6
	実数b：3
	4.60の3乗は97.34です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---xのn乗を返す--- */
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
	{
		tmp *= x;		/* tmpにxを掛ける */
	}
	return tmp;
}

int main()
{
	double a;
	int b;

	printf("aのb乗を求めます。\n");
	printf("実数a：");   scanf("%lf", &a);
	printf("整数b：");   scanf("%d",  &b);

	printf("%.2fの%d乗は%.2fです。\n", a, b, power(a, b));

	getchar();
	getchar();
	return 0;
}