
/*
	���K2-2

	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA���̘a�Ɛς�\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����a�F54
	����b�F12
	�����̘a��66�Őς�648�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int wa, seki;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");	scanf("%d", &a);
	printf("����b�F");	scanf("%d", &b);

	wa = a + b;
	seki = a * b;

	printf("�����̘a��%d�Őς�648�ł��B", wa, seki);

	getchar();
	return 0;
}