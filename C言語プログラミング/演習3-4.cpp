
/*
	演習3-4

	右に示すように、二つの整数値を読み込んで、それらの値が等しければ「AとBは等しいです。」と
	Aの方が大きければ「AはBより大きいです。」と
	Bの方が大きければ「AはBより小さいです。」と表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数A：54
	整数B：12
	AはBより大きいです。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);

	if (a == b)
	{
		puts("AとBは等しいです。");
	}
	else if (a > b)
	{
		puts("AはBより大きいです。");
	}
	else if (a < b)
	{
		puts("AはBより小さいです。");
	}

	getchar();
	return 0;
}