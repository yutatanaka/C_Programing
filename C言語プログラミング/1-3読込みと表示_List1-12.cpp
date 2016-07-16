
/*
	乗算を行う

	読み込んだ整数値の5倍の値を表示
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);						/* 整数値を読み込む */

	printf("その数の5倍は%dです。\n", 5 * no);
	getchar();
	return 0;
}