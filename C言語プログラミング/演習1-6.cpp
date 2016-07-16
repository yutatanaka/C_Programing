
/*
	演習1-6

	右に示すように、読み込んだ整数値から6を減じた値を表示するプログラムを作成せよ。

	＜出力結果＞
	整数を入力してください：57
	57から6を減じると51です。

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	printf("%dから%dを減じると%dです。\n", no, 6, no - 6);

	getchar();
	return 0;
}