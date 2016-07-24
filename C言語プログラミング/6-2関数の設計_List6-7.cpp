
/*
	関数の設計

	値を返さない関数
	<出力結果>
	左下直角二等辺三角形を作ります。
	短辺：5
	*
	**
	***
	****
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---記号文字'*'をn個連続して表示--- */
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main()
{
	int i, len;

	printf("左下直角二等辺三角形を作ります。\n");
	printf("短辺：");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		put_stars(i);
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}