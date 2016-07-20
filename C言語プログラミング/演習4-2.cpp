
/*
	演習4-2

	右に示すように、二つの整数値を読み込んで、小さいほうの数以上で
	大きいほうの数以下の全整数を加えた値を表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数a:37
	整数b:28
	28以上37以下の全整数の和は325です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, min, max;
	int sum = 0;

	puts("二つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else if (b > a)
	{
		max = b;
		min = a;
	}

	printf("%d以上%d以下の全整数の和は", min, max);

	do{
		sum = sum + min;
		min = min + 1;
	} while (min < max + 1);

	printf("%dです。", sum);

	getchar();
	return 0;
}