
/*
	�L���X�g���̂Q

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

	printf("�����̕��ς�%f�ł��B\n", (double)(a + b) / 2);	/* �L���X�g */

	getchar();
	return 0;
}