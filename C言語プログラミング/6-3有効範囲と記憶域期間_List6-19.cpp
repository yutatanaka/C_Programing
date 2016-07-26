
/*
	記憶域期間その２

	静的記憶域期間をもつオブジェクトの暗黙の初期化を確認
	＜出力結果＞
	fx = 0
	si = 0
	sd = 0
	sa[0] = 0
	sa[1] = 0
	sa[2] = 0
	sa[3] = 0
	sa[4] = 0
*/

#include <stdio.h>

int fx;					/* 0で初期化される */

int main()
{
	int i;
	static int si;		/* 0で初期化される */
	static double sd;	/* 0.0で初期化される */
	static int sa[5];	/* 全要素が0で初期化される */

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
	{
		printf("sa[%d] = %d\n", i, sa[i]);
	}

	getchar();
	getchar();
	return 0;
}