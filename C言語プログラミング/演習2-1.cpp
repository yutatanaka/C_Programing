
/*
	演習2-1

	右に示すように、二つの整数値を読み込んで、前者の値が後者の何％であるかを表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数x：54
	整数y：84
	xの値はyの64%です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	puts("二つの整数を入力してください。");
	printf("整数x：");	scanf("%d", &x);
	printf("整数y：");	scanf("%d", &y);

	printf("xの値はyの%d%%です。", x % y);

	getchar();
	return 0;
}