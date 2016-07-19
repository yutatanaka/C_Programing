
/*
	演習3-10

	右に示すように、三つの整数値を読み込んで、
	それらの値が全て等しければ「三つの値は等しいです。」と
	どれか二つの値が等しければ「二つの値が等しいです。」と
	そうでなければ「三つの値は異なります。」と
	表示するプログラムを作成せよ。

	＜出力結果＞
	三つの整数を入力してください。
	整数A：12
	整数B：35
	整数C：12
	二つの値が等しいです。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);
	printf("整数C：");   scanf("%d", &c);

	if (a == b && b == c)
	{
		printf("三つの値は等しいです。");
	}
	else if (a == b || b == c || c == a)
	{
		printf("二つの値が等しいです。");
	}
	else
	{
		printf("三つの値は異なります。");
	}


	getchar();
	return 0;
}