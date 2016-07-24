
/*  
	演習6-2

	三つのint整数値の最小値を返す関数を作成せよ。
	int min3(int a. int b, int c) {      }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 最小値を返す関数 */
int min3(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int main()
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &a);
	printf("整数2：");   scanf("%d", &b);
	printf("整数3：");   scanf("%d", &c);

	printf("最小値は%dです。\n", min3(a, b, c));

	getchar();
	getchar();
	return 0;
}