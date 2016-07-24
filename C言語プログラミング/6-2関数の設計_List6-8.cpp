
/*
	値を返さない関数その２

	右下直角二等辺三角形を表示（関数版）
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

/* ---文字chをn個連続して表示--- */
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main()
{
	int i, len;

	printf("右下直角二等辺三角形を作ります。\n");
	printf("短辺：");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}