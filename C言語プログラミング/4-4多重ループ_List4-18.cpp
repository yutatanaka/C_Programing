
/*
	���}�`�̕`�恄

	���������p�̒��p�񓙕ӎO�p�`��\��

	<�o�͌���>
	�������p�񓙕ӎO�p�`�����܂��B
	�Z�ӁF5
	*
	**
	***
	****
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("�������p�񓙕ӎO�p�`�����܂��B");
	printf("�Z�ӁF");
	scanf("%d", &len);

	for (i = 1; i <= len; i++)					/* i�s(i = 1, 2, ��� , len) */
	{
		for (j = 1; j <= i; j++)				/* �e�s��i��'*'��\�� */
		{
			putchar('*');						
		}
		putchar('\n');							/* ���s */
	}

	getchar();
	getchar();
	return 0;
}