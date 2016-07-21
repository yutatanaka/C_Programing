
/*
	演習4-16

	整数値を読み込んで、その整数以下の奇数を表示するプログラムを作成せよ。

	<出力結果>
	整数値：15
	1 3 5 7 9 11 13 15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;
	
	printf("整数値：");   scanf("%d", &num);

	for (i = -1; i <= num; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);

	}

	getchar();
	getchar();
	return 0;
}