
/*
	�������߂�

	�ǂݍ��񂾓�̐����l�̍������߂ĕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	printf("�����̍���%d�ł��B\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	getchar();
	return 0;
}