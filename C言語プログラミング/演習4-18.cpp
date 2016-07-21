
/*
	演習4-18

	整数値を読み込んで、その個数だけ'*'を表示するプログラムを作成せよ。

	<出力結果>

	何個*を表示しますか：12
	*****
	*****
	**
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;

	printf("何個*を表示しますか：");
	scanf("%d", &num);

	for (i = 0; i < num; ++i)
	{
		if (i % 5 == 0)
		{
			putchar('\n');
		}
			putchar('*');
	}

	getchar();
	getchar();
	return 0;
}