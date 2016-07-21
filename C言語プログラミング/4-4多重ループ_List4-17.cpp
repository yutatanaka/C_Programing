
/*
	図形の描画

	長方形を描画

	＜出力結果＞
	長方形を作ります。
	高さ：3
	横幅：7
	*******
	*******
	*******
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	int height, width;

	puts("長方形を作ります。");
	printf("高さ：");   scanf("%d", &height);
	printf("横幅：");   scanf("%d", &width);

	for (i = 1; i <= height; i++)				/* 長方形はheight */
	{
		for (j = 1; j <= width; j++)			/* 各行にwidth個の'*'を表示 */
		{
			putchar('*');						/* 改行 */
		}
		putchar('\n');
	}

	getchar();
	return 0;
}