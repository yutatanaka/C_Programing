
/*
	�񐔂̗�

	�ǂݍ��񂾐����l�̑S�񐔂�\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;

	printf("�����l�F");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}