
/*
	�֐��ďo��

	��̐����̑傫���ق��̒l�����߂�

	<�o�͌���>
	�\�\���s��P�\�\
	��̐�������͂��Ă��������B
	����1�F45
	����2�F83
	�傫���ق��̒l��83�ł��B

	�\�\���s��Q�\�\
	��̐�������͂��Ă�������
	����1�F37
	����2�F21
	�傫���ق��̒l��37�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	printf("�傫���ق��̒l��%d�ł��B\n", max2(n1, n2));


	getchar();
	getchar();
	return 0;
}