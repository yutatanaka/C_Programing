
/*
	条件演算子

	読み込んだ二つの整数値の大きいほうの値を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max;

	puts("二つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	max = (n1 > n2) ? n1 : n2;			/* 大きいほうの値をmaxに代入 */

	printf("大きいほうの値は%dです。\n", max);

	getchar();

	return 0;
}