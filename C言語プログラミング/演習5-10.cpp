
/*
	���K5-10

	4�s3��̍s���3�s4��̍s��̐ς����߂�v���O�������쐬����B
	�e�\���v�f�̒l�̓L�[�{�[�h����ǂݍ��ނ��ƁB
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k, sum = 0;
	int matrix1[4][3];
	int matrix2[3][4];

	puts("4�s3��̍s���3�s4��̍s��̐ς����߂܂��B");
	puts("4�s3��̍s�����͂��ĉ������B�i�����Ɛ����̊Ԃ͔��p�X�y�[�X�j");
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
	}

	puts("3�s4��̍s�����͂��ĉ������B�i�����Ɛ����̊Ԃ͔��p�X�y�[�X�j");
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2], &matrix2[i][3]);
	}

	puts("4�s3��̍s���3�s4��̍s��̐ς�");
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