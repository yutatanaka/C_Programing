
/*
	複数の変換指定

	二つの整数値を読み込んで商と剰余を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a：");	scanf("%d", &a);
	printf("整数b：");  scanf("%d", &b);

	printf("aをbで割ると%dあまり%dです。\n", a / b, a % b);

	getchar();
	return 0;
}