
/*
	puth関数：表示を行う関数

	読み込んだ二つの整数値の和(加算結果)を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);

	printf("それらの和は%dです。\n", n1 + n2);		/* 和を表示 */

	getchar();
	return 0;
}