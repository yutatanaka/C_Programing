
/*
	�z��̎�n��

	�p��̓_���Ɛ��w�̓_���̍ō��_�����߂�

	<�o�͌���>
	5�l�̓_������͂��Ă��������B
	[1] �p��F53
	�@�@���w�F82
	[2] �p��F49
	�@�@���w�F35
	[3] �p��F21
		���w�F72
	[4] �p��F91
		���w�F35
	[5] �p��F77
		���w�F12
	�p��̍ō��_��91
	���w�̍ō��_��82
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5			/* �w���̐l�� */

/* ---�v�f��n�̔z�񂖂̍ő�l��Ԃ�--- */
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	return max;
}

int main()
{
	int i;
	int eng[NUMBER];		/* �p��̓_�� */
	int mat[NUMBER];		/* ���w�̓_�� */
	int max_e, max_m;		/* �ō��_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d] �p��F", i + 1);   scanf("%d", &eng[i]);
		printf( "    ���w�F");			scanf("%d", &mat[i]);
	}

	max_e = max_of(eng, NUMBER);
	max_m = max_of(mat, NUMBER);

	printf("�p��̍ō��_��%d\n", max_e);
	printf("���w�̍ō��_��%d\n", max_m);

	getchar();
	getchar();
	return 0;
}