
/*
	���K5-8

	List5-12�̕��z�O���t�̕\�����t��(0�`9�A10�`19�A�c�A100�̏�)�ɍs���v���O�������쐬����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 80

int main()
{
	int i, j;
	int num;				/* ���ۂ̐l�� */
	int tensu[NUMBER];		/* �w���̓_�� */
	int bunpu[11] = { 0 };	/* �_���̕��z */

	printf("�l������͂��Ă������� :");
	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
		{
			printf("\a1�`%d�œ��͂��Ă��������F", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d�l�̓_������͂��Ă��������B\n", num);

	for (i = 0; i < num; ++i)
	{
		printf("%2d�� :", i + 1);
		do
		{
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
			{
				printf("\a1�`100�œ��͂��Ă��������F");
			}

		} while (tensu[i] < 0 || tensu[i] > 100);
		
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---���z�O���t---");

	for (i = 0; i <= 9; ++i)
	{
		printf("%3d �`%3d :", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; ++j)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("      100 :");
	for (j = 0; j < bunpu[10]; ++j)			/* 100�_ */
	{
		putchar('*');
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}