
/*
	���K6-13
	2�񕪂̓_����3�����z��Ɋi�[����悤��List6-16�������������v���O�������쐬����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---4�s3��̍s��a��b�̘a�����Ɋi�[����--- */
void mat_add(const int a[4][3], const int b[4][3], int c[2][4][3])
{
	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (i == 0)
					c[i][j][k] = a[j][k];
				if (i == 1)
					c[i][j][k] = b[j][k];
			}
		}
	}
}


void mat_print(const int m[2][4][3])
{
	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%4d", m[i][j][k]);
			}
		}
		printf("\n");
	}
}

int main()
{
	int tensu1[4][3] = { { 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 } };
	int tensu2[4][3] = { { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } };
	int sum[2][4][3];

	mat_add(tensu1, tensu2, sum);

	mat_print(sum);

	getchar();
	getchar();
	return 0;
}