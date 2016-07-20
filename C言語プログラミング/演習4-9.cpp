
/*
	演習4-9

	読み込んだ値の個数だけ+と-を交互に表示するプログラムを表示せよ。
	なお、0以下の整数が入力された場合は、何も表示しないこと。

	<出力結果>

	正の整数：13
	+-+-+-+-+-+-+
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	printf("正の整数：");
	scanf("%d", &num);

	i = 0;

	if (num > 0)
	{
		while (i < num)
		{
			if (i % 2 == 0)
			{
				printf("+");
				++i;
			}
			else
			{
				printf("-");
				++i;
			}
		}
	}
	getchar();
	return 0;
}