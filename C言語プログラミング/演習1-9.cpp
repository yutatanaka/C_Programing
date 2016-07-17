
/*
	演習1-9

	右に示すように、読み込んだ三つの整数値の和を表示するプログラムを作成せよ。

	＜出力結果＞

	三つの整数を入力してください。
	整数1：7
	整数2：15
	整数3：23
	それらの和は45です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	int wa;
	
	puts("三つの整数を入力してください。");
	
	printf("整数1：");	scanf("%d", &n1);
	printf("整数2：");	scanf("%d", &n2);
	printf("整数3：");	scanf("%d", &n3);

	wa = n1 + n2 + n3;

	printf("それらの和は%dです。", wa);

	getchar();
	return 0;
}