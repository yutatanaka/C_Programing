
/*
	���K6-3

	int�^������3��l��Ԃ��֐����쐬����B
	int cube(int x) {   }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* x�̂R��l��Ԃ� */
int cube(int x)
{
	return x * x * x;
}

int main()
{
	int x;
	puts("��������͂��Ă��������B");
	printf("�����F");   scanf("%d", &x);

	printf("���͂��������R�悵������%d�ł��B\n", cube(x));

	getchar();
	getchar();
	return 0;
}