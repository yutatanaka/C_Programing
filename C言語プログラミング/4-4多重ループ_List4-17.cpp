
/*
	�}�`�̕`��

	�����`��`��

	���o�͌��ʁ�
	�����`�����܂��B
	�����F3
	�����F7
	*******
	*******
	*******
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	int height, width;

	puts("�����`�����܂��B");
	printf("�����F");   scanf("%d", &height);
	printf("�����F");   scanf("%d", &width);

	for (i = 1; i <= height; i++)				/* �����`��height */
	{
		for (j = 1; j <= width; j++)			/* �e�s��width��'*'��\�� */
		{
			putchar('*');						/* ���s */
		}
		putchar('\n');
	}

	getchar();
	return 0;
}