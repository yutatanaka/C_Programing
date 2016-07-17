
/*
	演習3-1

	右に示すように、２つの整数値を読み込んで、後者が前者の約数であれば「BはAの約数です。」と表示し
	そうでなければ「BはAの約数ではありません。」と表示するプログラムを作成せよ。

	＜出力結果＞

	二つの整数を入力してください。
	整数A：17
	整数B：5
	BはAの約数ではありません。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);


	if (a % b)
	{
		printf("BはAの約数ではりません");
	}

	getchar();
	return 0;
}