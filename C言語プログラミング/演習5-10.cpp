
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
	int value1[4][3];
	int value2[3][4];

	puts("4行3列の行列と3行4列の行列の積を求めます。");
	puts("4行3列の行列を入力してください。(数字と数字の間は半角スペース)");

	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &value1[i][0], &value1[i][1], &value1[i][2]);
	}
	printf("3行4列の行列を入力してください。(数字と数字の間は半角スペース)\n");

	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &value2[i][0], &value2[i][1], &value2[i][2], &value2[i][3]);
	}
	printf("4行3列の行列と3行4列の行列の積は\n");

	for (k = 0; k < 4; k++)
	{
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				sum = sum + (value1[k][j] * value2[j][i]);
			}
			printf("%3d ", sum);
			sum = 0;
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}