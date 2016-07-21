
/*
	演習4-17

	右に示すように、1からnまでの整数値の2乗値を表示するプログラムを作成せよ。

	<出力結果>

	nの値：3
	1の２乗は1
	2の２乗は4
	3の２乗は9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int num;

	printf("nの値：");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%dの２乗は%d\n", i, i * i);
	}

	getchar();
	getchar();
	return 0;
}
