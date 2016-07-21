
/*
	図形の描画その３

	右下が直角の直角二等辺三角形を表示

	<出力結果>
	右下直角二等辺三角形を作ります。
	短辺：5
	     *
		**
	   ***
	  ****
	 *****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("右下直角二等辺三角形を作ります。");
	printf("短辺：");   scanf("%d", &len);

	for (i = 1; i <= len; i++)					/* i行(i = 1, 2, ･･･ , len) */
	{
		for (j = 1; j <= len - i; j++)			/* 各行にlen - i個の' 'を表示 */
			putchar(' ');
		for (j = 1; j <= i; j++)				/* 各行にi個の'*'を表示 */
			putchar('*');
		putchar('\n');							/* 改行 */
	}

	getchar();
	getchar();
	return 0;
}