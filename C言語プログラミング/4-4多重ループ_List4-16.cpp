
/*
	2重ループ

	九九の表を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", i * j);
		}
		putchar('\n');				/* 改行 */
	}

	getchar();
	getchar();
	return 0;
}