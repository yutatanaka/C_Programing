
/*
	���ϒl�����߂�

	��̐����l��ǂݍ���ŕ��ϒl��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");	scanf("%d", &a);
	printf("����b�F");	scanf("%d", &b);

	printf("�����̕��ς�%d�ł��B\n", (a + b) / 2);

	getchar();
	return 0;
}