
/*
	記憶域期間

	自動記憶域期間と静的記憶域期間
	<出力結果>
	 ax sx fx
	----------
	  0  0  0
	  0  1  1
	  0  2  2
	  0  3  3
	  0  4  4
	  0  5  5
	  0  6  6
	  0  7  7
	  0  8  8
	  0  9  9
	----------
*/

#include <stdio.h>

int fx = 0;					/* 静的記憶域期間＋ブロック有効範囲 */

void func()
{
	static int sx = 0;		/* 静的記憶域期間＋ブロック有効範囲 */
	int		   ax = 0;		/* 自動記憶域期間＋ブロック有効範囲 */

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main()
{
	int i;
	
	puts(" ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
	{
		func();
	}
	puts("----------");

	getchar();
	return 0;
}