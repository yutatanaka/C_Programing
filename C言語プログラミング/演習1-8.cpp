
/*
	���K1-8

	�E�Ɏ����悤�ɁA�ǂݍ��񂾓�̐����l�̐ς�\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����1�F27
	����2�F35
	�����̐ς�945�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	int wa;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");	scanf("%d", &n1);
	printf("����2�F");	scanf("%d", &n2);

	wa = n1 * n2;

	printf("�����̐ς�%d�ł��B", wa);

	getchar();
	return 0;
}