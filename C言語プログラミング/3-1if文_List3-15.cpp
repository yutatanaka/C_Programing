
/*
	差を求める

	読み込んだ二つの整数値の差を求めて表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	printf("それらの差は%dです。\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	getchar();
	return 0;
}