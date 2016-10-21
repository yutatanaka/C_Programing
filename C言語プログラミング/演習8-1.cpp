
/*
	演習8-1

	二つの値xとyの差を求める関数形式マクロを定義せよ。
	diff(x, y);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define diff(x, y) ((x) - (y))		// xとyの差を求める関数形式マクロ

int main()
{
	int x;
	int y;

	printf("1つ目の整数を入力してください：");
	scanf("%d", &x);
	printf("2つ目の整数を入力してください：");
	scanf("%d", &y);
	printf("2つの数の差は%d - %d = %dです。\n",x, y, diff(x, y));

	getchar();
	getchar();
	return 0;
}