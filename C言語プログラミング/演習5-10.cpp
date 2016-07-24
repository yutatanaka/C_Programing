
/*
	演習5-10

	4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ。
	各構成要素の値はキーボードから読み込むこと。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k, sum = 0;
	int matrix1[4][3];
	int matrix2[3][4];

	puts("4行3列の行列と3行4列の行列の積を求めます。");
	puts("4行3列の行列を入力して下さい。（数字と数字の間は半角スペース）");
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
	}

	puts("3行4列の行列を入力して下さい。（数字と数字の間は半角スペース）");
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2], &matrix2[i][3]);
	}

	puts("4行3列の行列と3行4列の行列の積は");
	for (k = 0; k < 4; k++)
	{
		for (j = 0; j < 4; j++)
		{
			for (i = 0; i < 3; i++)
			{
				sum = sum + (matrix1[k][i] * matrix2[i][j]);
			}
			printf("%3d", sum);
			sum = 0;
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}