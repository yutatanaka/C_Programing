
/*
	���K5-5

	List5-8�̔z��̗v�f�����I�u�W�F�N�g�`���}�N���Œ�`����悤�ɕύX�����v���O�������쐬����B
	�v�f�̌������s���񐔂Ɋւ���K������������K�v������

	<�o�͌���>
	x[0] : 15
	x[1] : 67
	x[2] : 28
	x[3] : 77
	x[4] : 35
	x[5] : 91
	x[6] : 83
	���]���܂����B
	x[0] : 83
	x[1] : 91
	x[2] : 35
	x[3] : 77
	x[4] : 28
	x[5] : 67
	x[6] : 15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7					/* x[]�̔z�� */

int main()
{
	int i;
	int x[NUMBER];					/* int[NUMBER]�^�̔z�� */

	for (i = 0; i < NUMBER; ++i)	/* �v�f�ɒl��ǂݍ��� */
	{
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; ++i)			/* �v�f�̕��т𔽓] */
	{
		int temp = x[i];
		x[i] = x[NUMBER - 1 - i];
		x[NUMBER - 1 - i] = temp;
	}

	puts("���]���܂����B");
	for (i = 0; i < NUMBER; ++i)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	getchar();
	getchar();
	return 0;
}