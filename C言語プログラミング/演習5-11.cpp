
/*
	���K5-11

	6�l��2�Ȗ�(����E���w)�̓_����ǂݍ���ŁA�Ȗڂ��Ƃ̍��v�_�ƕ��ϓ_�A
	�w�����Ƃ̕��ϓ_�����߂�v���O�������쐬����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k = 0;
	int students[6];
	int tensu[6][6];
	int sum_kokugo = 0, sum_sugaku = 0, sum_students = 0;

	puts("����A���w�̏��ɓ_������͂��Ă��������B");
	for (i = 0; i < 6; i++)
	{
		printf("%d�l��\n", i + 1);
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &tensu[i][j]);
		}
	}
	for (i = 0; i < 6; i++)
	{
		sum_kokugo = sum_kokugo + tensu[i][0];
	}
	for (i = 0; i < 6; i++)
	{
		sum_sugaku = sum_sugaku + tensu[i][1];
	}
	for (i = 0; i < 6; i++)
	{
		sum_students = 0;
		for (j = 0; j < 2; j++)
		{
			sum_students = sum_students + tensu[i][j];
		}
		students[i] = sum_students;
	}

	printf("���� ���v�_�F%d  ���ϓ_�F%d\n", sum_kokugo, sum_kokugo / 2);
	printf("���w ���v�_�F%d  ���ϓ_�F%d\n", sum_sugaku, sum_sugaku / 2);
	for (i = 0; i < 6; i++)
	{
		printf("%d�l�� ���v�_�F%d ���ϓ_ �F%d\n", i + 1, students[i], students[i] / j);
	}


	getchar();
	getchar();
	return 0;
}