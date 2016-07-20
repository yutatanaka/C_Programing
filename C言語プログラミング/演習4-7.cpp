
/*
	演習4-7

	右に示すように、読み込まれた整数以下である正の２のべき乗の数を順に表示するプログラムを作成せよ。

	＜出力結果＞

	正の整数を入力してください：19
	2 4 8 16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 2;

	while (i <= no)
	{
		printf("%d", i);
		i *= 2;
	}

	getchar();
	return 0;
}