
/*
	�傫���ق��̒l�����߂�

	�ǂݍ��񂾓�̐����l�̑傫���ق��̒l��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("�傫���ق��̒l��%d�ł��B\n", n1);
	}
	else
	{
		printf("�傫���ق��̒l��%d�ł��B\n", n2);
	}

	getchar();
	return 0;
}