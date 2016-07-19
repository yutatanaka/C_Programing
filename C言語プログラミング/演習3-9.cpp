
/*
	演習3-9

	演習3-6のプログラムを、if文でなく条件演算子を用いて書き換えよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, min;

	puts("三つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);
	printf("整数3：");   scanf("%d", &n3);

	min = (n1 < n2) ? n1 : n2;
	min = (n2 < n3) ? n2 : n3;

	printf("大きいほうの値は%dです。\n", min);

	getchar();
	getchar();
	return 0;
}