
/*
	�o�u���\�[�g
	�w���̐g����ǂݍ���Ń\�[�g
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* �l�� */

/* �o�u���\�[�g */
void bsort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main()
{
	int i;
	int height[NUMBER];		/* NUMBER�l�̊w���̐g�� */

	printf("%d�l�̐g������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);	/* �\�[�g */
	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d�ԁF%d\n", i + 1, height[i]);
	}

	getchar();
	return 0;
}