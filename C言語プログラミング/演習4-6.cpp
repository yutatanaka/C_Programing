
/*
	演習4-6

	右に示すように、読み込まれた整数値以下である正の偶数を順に表示するプログラムを作成せよ。

	＜出力結果＞

	正の整数を入力してください：19
	2 4 6 8 10 12 14 16 18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 2;
	
	/*if (no >= 2)
	{
		while (2 * i <= no)
		{
			printf("%d ", 2 * i++);

		}
		printf("\n");
	}*/

	while (i <= no)
	{
		printf("%d ", i);
		i += 2;
	}

	getchar();
	getchar();
	return 0;
}