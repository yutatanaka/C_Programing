
/*
	�����̕ϊ��w��

	��̐����l��ǂݍ���ŏ��Ə�]��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");	scanf("%d", &a);
	printf("����b�F");  scanf("%d", &b);

	printf("a��b�Ŋ����%d���܂�%d�ł��B\n", a / b, a % b);

	getchar();
	return 0;
}