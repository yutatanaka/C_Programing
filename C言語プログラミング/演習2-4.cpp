
/*
	演習2-4

	整数定数、浮動小数点定数、int型の変数、double型の変数をを、掛けたり割ったりするなど
	いろいろな演算を行うプログラムを作成し、本文に示した規則を確認せよ。
*/

#include <stdio.h>

int main()
{
	int n1, n2;
	double d1, d2;

	n1 = 10;
	n2 = 2;

	d1 = 10.0;
	d2 = 2.0;

	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%f * %f = %f\n", d1, d2, d1 * d2);
	printf("%f / %f = %f\n", d1, d2, d1 / d2);

	getchar();
	return 0;
}