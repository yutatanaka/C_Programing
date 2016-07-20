
/*
	演習4-8

	読み込んだ値が1未満であれば改行文字を出力しないようにList4-8を書き換えたプログラムを作成せよ。

	<出力結果>

	正の整数：15
	***************

	正の整数：0


	正の整数：-5


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数：");
	scanf("%d", &no);

	while (no-- > 0)
	{
		putchar('*');
	}
	if (no > 0)
		putchar('\n');

	getchar();
	return 0;
}