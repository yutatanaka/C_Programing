
/*
	�L���X�g

	��̐����l��ǂݍ���ŕ��ϒl�������ŕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	printf("�����̕��ς�%f�ł��B\n", (a + b) / 2.0);

	getchar();
	return 0;
}