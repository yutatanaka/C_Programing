
/*
	puts関数：表示を行う関数その２

	読み込んだ二つの整数値の和(加算結果)を変数に格納して表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	int wa;		/* 和 */

	puts("二つの整数を入力してください。");
	printf("整数1：");	scanf("%d", &n1);
	printf("整数2：");	scanf("%d", &n2);

	wa = n1 + n2;								/* n1とn2の和を代入 */

	printf("それらの和は%dです。\n", wa);		/* 和を表示 */

	getchar();
	return 0;
}