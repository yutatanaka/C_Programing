
/*
	���K5-9

	�E�Ɏ����悤�ɁA���K5-8�̕��z���̂̕\�����c�����Ɍ������v���O�������쐬����B
	<�o�͌���>
	                   *
		      *  *     *     *
        *  *  *  *  *  *  *  *  *  *
	 0 10 20 30 40 50 60 70 80 90 100
	----------------------------------
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 80

int main()
{
	int i, j, max;
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

	putchar('\n');


	max = bunpu[0];
	for (i = 1; i < 10; i++)
	{
		if (max < bunpu[i])
		{
			max = bunpu[i];
		}
	}

	for (i = max; i > 0; i--)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == bunpu[j])
			{
				printf("*  ");
				bunpu[j]--;
			}
			else
			{
				printf("   ");
			}
		}
		putchar('\n');
	}
	
	printf("----------------------------------\n");
	printf(" 0 10 20 30 40 50 60 70 80 90 100");

	getchar();
	getchar();
	return 0;
}