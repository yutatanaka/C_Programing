
/*
	����̊֐����Ăяo���֐�

	�l�̐����̍ő�l�����߂�
	<�o�͌���>
	�l�̐�������͂��Ă��������B
	����n1�F5
	����n2�F3
	����n3�F8
	����n4�F4
	�ł��傫���l��8�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �傫���ق��̒l��Ԃ� */
int max2(int a, int b)
{
	return (a > b) ? a : b;
}

/* �l�̐����̍ő�l��Ԃ� */
int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}

int main()
{
	int n1, n2, n3, n4;
	puts("�l�̐�������͂��Ă��������B");
	printf("����n1�F");   scanf("%d", &n1);
	printf("����n2�F");   scanf("%d", &n2);
	printf("����n3�F");   scanf("%d", &n3);
	printf("����n4�F");   scanf("%d", &n4);

	printf("�ł��傫���l��%d�ł��B\n", max4(n1, n2, n3, n4));

	getchar();
	getchar();
	return 0;
}