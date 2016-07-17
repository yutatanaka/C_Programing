
/*
	演習2-5

	右に示すように、二つの整数値を読み込んで、前者の値が後者の何%であるかを実数で表示する
	プログラムを作成せよ。

	＜出力結果＞
	二つの整数を入力してください。
	整数a：54
	整数b：84
	aの値はbの64.285714%です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("aの値はbの%f%%です。", (double)(a % b));
	getchar();
	return 0;
}