
/*
	関数呼出し

	二つの整数の大きいほうの値を求める

	<出力結果>
	――実行例１――
	二つの整数を入力してください。
	整数1：45
	整数2：83
	大きいほうの値は83です。

	――実行例２――
	二つの整数を入力してください
	整数1：37
	整数2：21
	大きいほうの値は37です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	printf("大きいほうの値は%dです。\n", max2(n1, n2));


	getchar();
	getchar();
	return 0;
}