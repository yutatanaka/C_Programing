
/*
	�O�l�̍ő�l�����߂�

	�ǂݍ��񂾎O�̐����l�̍ő�l�����߂ĕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, max;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);
	printf("����3�F");   scanf("%d", &n3);

	max = n1;
	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}

	printf("�ő�l��%d�ł��B\n", max);

	getchar();
	return 0;
}