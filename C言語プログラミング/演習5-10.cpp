
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
	int value1[4][3];
	int value2[3][4];

	puts("4�s3��̍s���3�s4��̍s��̐ς����߂܂��B");
	puts("4�s3��̍s�����͂��Ă��������B(�����Ɛ����̊Ԃ͔��p�X�y�[�X)");

	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &value1[i][0], &value1[i][1], &value1[i][2]);
	}
	printf("3�s4��̍s�����͂��Ă��������B(�����Ɛ����̊Ԃ͔��p�X�y�[�X)\n");

	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &value2[i][0], &value2[i][1], &value2[i][2], &value2[i][3]);
	}
	printf("4�s3��̍s���3�s4��̍s��̐ς�\n");

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