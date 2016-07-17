
/*
	キャスト

	二つの整数値を読み込んで平均値を実数で表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("それらの平均は%fです。\n", (a + b) / 2.0);

	getchar();
	return 0;
}