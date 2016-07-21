
/*
	List4-19を書きかえて、右上側が直角となる
	直角二等辺三角形を表示するプログラムを作成せよ。

	<出力結果>

	右上直角二等辺三角形を作ります。
	短辺：5
	*****
	 ****
	  ***
	   **
	    *
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("右上直角二等辺三角形を作ります。");
	printf("短辺：");   scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		for (j = 0; j < len - i; j++)
			putchar('*');
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}