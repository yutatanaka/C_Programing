
/*
	���K3-9

	���K3-6�̃v���O�������Aif���łȂ��������Z�q��p���ď���������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, min;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);
	printf("����3�F");   scanf("%d", &n3);

	min = (n1 < n2) ? n1 : n2;
	min = (n2 < n3) ? n2 : n3;

	printf("�傫���ق��̒l��%d�ł��B\n", min);

	getchar();
	getchar();
	return 0;
}