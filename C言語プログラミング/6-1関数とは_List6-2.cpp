
/*
	�O�l�̍ő�l

	�O�̐����̍ő�l�����߂�
	<�o�͌���>
	�O�̐�������͂��Ă��������B
	����a�F5
	����b�F3
	����c�F4
	�ő�l��5�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---�O�̐����̍ő�l��Ԃ�--- */

int max3(int a, int b, int c)
{
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int a, b, c;

	puts("�O�̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);
	printf("����c�F");   scanf("%d", &c);

	printf("�ő�l��%d�ł��B\n", max3(a, b, c));

	getchar();
	getchar();
	return 0;
}