
/*
	配列の初期化

	配列の各要素を先頭から順に1,2,3,4,5で初期化して表示

	<出力結果>

	v[0] = 1
	v[1] = 2
	v[2] = 3
	v[3] = 4
	v[4] = 5
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5] = { 1, 2, 3, 4, 5 };		/* 初期化 */

	for (i = 0; i < 5; i++)				/* 要素の値を表示 */
		printf("v[%d] = %d\n", i, v[i]);

	getchar();
	return 0;
}