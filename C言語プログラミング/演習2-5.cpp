
/*
	���K2-5

	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�O�҂̒l����҂̉�%�ł��邩�������ŕ\������
	�v���O�������쐬����B

	���o�͌��ʁ�
	��̐�������͂��Ă��������B
	����a�F54
	����b�F84
	a�̒l��b��64.285714%�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	printf("a�̒l��b��%f%%�ł��B", (double)(a % b));
	getchar();
	return 0;
}