
/*
	演習4-14

	右に示すように、1234567890を繰り返し表示するプログラムを作成せよ。
	読み込まれた整数値の個数だけ数字を表示すること。

	<出力結果>

	正の整数を入力してください：25
	1234567890123456789012345
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int j = 1;
	int num;

	printf("正の整数を入力してください：");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d ", j);
		j++;
		if (j == 10)
		{
			j = 0;
		}

	}
	getchar();
	return 0;
}