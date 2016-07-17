
/*
	double型の演算

	二つの実数値を読み込んで和・差・積・商
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double vx, vy;		/* 浮動小数点数 */

	puts("二つの実数を入力してください。");
	printf("実数vx：");		scanf("%lf", &vx);
	printf("実数vy：");		scanf("%lf", &vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);

	getchar();
	return 0;
}