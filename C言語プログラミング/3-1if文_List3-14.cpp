
/*
	�������Z�q

	�ǂݍ��񂾓�̐����l�̑傫���ق��̒l��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	max = (n1 > n2) ? n1 : n2;			/* �傫���ق��̒l��max�ɑ�� */

	printf("�傫���ق��̒l��%d�ł��B\n", max);

	getchar();

	return 0;
}