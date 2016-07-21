
/*
	演習4-20

	右に示すように、縦横のタイトルが付いた九九の表を表示するプログラムを作成する。

	<出力結果>

	   |  1  2  3  4  5  6  7  8  9
	---+----------------------------
	 1 |  1  2  3  4  5  6  7  8  9
	 2 |  2  4  6  8 10 12 14 16 18
	 3 |  3  6  9 12 15 18 21 24 27
	 4 |  4  8 12 16 20 24 28 32 36
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		if (i == 1)
		{
			printf("   |");
			for (j = 1; j <= 9; j++)
				printf("%3d", j);
			putchar('\n');
			puts("---+---------------------------");
		}
		printf(" %d |", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i * j);
		putchar('\n');
	}


	getchar();
	getchar();
	return 0;
}