
/*
	���K5-12

	2�񕪂̓_����3�����z�� tensu �Ɋi�[����悤��
	List5-13�������������v���O�������쐬����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 2

int main()
{
	int i, j, k;
	int tensu[NUMBER][4][3] =
	{
		{ { 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 } },
		{ { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } }
	};
	int sum[4][3] = { 0 };

	for (i = 0; i < NUMBER; i++)
	{
		printf("%d��ڂ̓_��\n", i + 1);
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%4d", tensu[i][j][k]);
			}
			printf("\n");
		}
	}
	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 3; k++)
		{
			for (i = 0; i < NUMBER; i++)
			{
				sum[j][k] = sum[j][k] + tensu[i][j][k];
			}
		}
	}

	printf("���v�_\n");
	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("%4d", sum[j][k]);
		}
		printf("\n");
	}


	getchar();
	getchar();
	return 0;
}