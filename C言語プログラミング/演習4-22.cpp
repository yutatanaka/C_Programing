
/*
	演習4-22

	List4-17のプログラムを書きかえて、横長の長方形を表示するプログラムを作成せよ。
	＊二つの辺の長さを読み込んで、小さいほうを行数として、大きいほうを列数とすること

	<出力結果>

	横長の長方形を作ります。
	一辺(その１) :7
	一辺(その２) :3
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
	int n1, n2;

	puts("横長の長方形を作ります。");
	printf("一辺(その１) :");   scanf("%d", &n1);
	printf("一辺(その２) :");   scanf("%d", &n2);

	if (n1 > n2)
	{
		width = n1;
		height = n2;
	}
	else if (n2 > n1)
	{
		width = n2;
		height = n1;
	}
	else
	{
		width = n1;
		height = n2;
	}

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}