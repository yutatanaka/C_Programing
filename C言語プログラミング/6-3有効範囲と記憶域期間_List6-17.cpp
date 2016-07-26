
/*
	有効範囲と識別子の可視性

	識別子の有効範囲を確認する
	＜出力結果＞
	x = 75
	x = 999
	x = 0
	x = 100
	x = 200
	x = 300
	x = 400
	x = 999
*/

#include <stdio.h>

int x = 75;						/* A : ファイル有効範囲 */

void print_x()
{
	printf("x = %d\n", x);
}

int main()
{
	int i;
	int x = 999;				/* B : ブロック有効範囲 */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++)
	{
		int x = i * 100;		/* C : ブロック有効範囲*/
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	getchar();
	return 0;
}
