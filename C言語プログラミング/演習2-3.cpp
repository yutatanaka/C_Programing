
/*
	演習2-3

	右に示すように、読み込んだ実数値をそのまま表示するプログラムを作成せよ。

	＜出力結果＞

	実数を入力してください：57.3
	あなたは57.300000と入力しましたね。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double num;

	printf("実数を入力してください：");		scanf("%lf", &num);
	printf("あなたは%fと入力しましたね。", num);

	getchar();
	return 0;
}