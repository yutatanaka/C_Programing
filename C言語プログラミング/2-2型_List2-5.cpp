
/*
	平均値を求める

	二つの整数値を読み込んで平均値を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a：");	scanf("%d", &a);
	printf("整数b：");	scanf("%d", &b);

	printf("それらの平均は%dです。\n", (a + b) / 2);

	getchar();
	return 0;
}