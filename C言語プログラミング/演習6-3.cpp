
/*
	演習6-3

	int型整数の3乗値を返す関数を作成せよ。
	int cube(int x) {   }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* xの３乗値を返す */
int cube(int x)
{
	return x * x * x;
}

int main()
{
	int x;
	puts("整数を入力してください。");
	printf("整数：");   scanf("%d", &x);

	printf("入力した数を３乗した数は%dです。\n", cube(x));

	getchar();
	getchar();
	return 0;
}