
/*
	2つの浮動小数点数(float型)を入力してその合計を表示するプログラムを作成する
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;

	printf("1つ目の数値：");	scanf("%f", &a);
	printf("2つ目の数値：");	scanf("%f", &b);

	printf("二つの合計：%f", a + b);

	getchar();
	return 0;
}