
/*
	多次元配列の受渡し

	4人の学生の3科目のテスト2回分の合計を求めて計算
*/

#include <stdio.h>

/* ---4行3列の行列aとbの和をcに格納する--- */
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

/* ---4行3列の行列mを表示--- */
void mat_print(const int m[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", m[i][j]);
		}
		putchar('\n');
	}
}


int main()
{
	int tensu1[4][3] = { { 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 } };
	int tensu2[4][3] = { { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } };
	int sum[4][3];		/* 合計 */

	mat_add(tensu1, tensu2, sum);				/* 2回分の点数の合計を求める */

	puts("1回目の点数");	mat_print(tensu1);	/* 1回目の点数を表示 */
	puts("2回目の点数");	mat_print(tensu2);	/* 2回目の点数を表示 */
	puts("合計点");			mat_print(sum);		/* 合計点を表示 */

	getchar();
	getchar();
	return 0;
}