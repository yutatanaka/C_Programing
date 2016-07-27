
/*
	演習6-12

	4行3列の行列aと3行4列bの積を、3行3列の行列ｃに格納する関数を作成せよ。
		void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {     }
*/

#include <stdio.h>

/* 4行3列の行列aと3行4列bの積を3行3列の行列cに格納する */
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
{
	int i, j;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] += a[i][j] * b[j][i];
		}
	}
}

int main()
{
	int i, j;
	int ma[4][3] = { { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };
	int mb[3][4] = { { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 } };
	int mc[3][3] = { 0 };

	mat_mul(ma, mb, mc);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d\n", mc[i][j]);
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}