
/*
	2つの整数の平均を計算する関数を作成しなさい。
	2つのint型引数を取り、結果を戻り値として返すこと。
	また、関数の動作を検証できるようにプログラムを作成しなさい。
	＊計算は整数で行い、小数点以下は切り捨ててよい。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Heikin(int a, int b)
{
	int heikin;
	heikin = a + b / 2;
	return heikin;
}

int main()
{
	int a, b, heikin;

	printf("数値１：");	scanf("%d", &a);
	printf("数値２：");	scanf("%d", &b);

	heikin = Heikin(a, b);

	printf("%d", heikin);

	getchar();
	return 0;
}