
/*
	���K6-1

	���int�����l�̏������ق��̒l��Ԃ��֐����쐬����B
	int min2(int a, int b){      }

	�������A������m�F���邽�߂̓K�؂�main�֐��Ȃǂ��쐬���A���������v���O��������邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min2(int a, int b)
{	
	int min = a;

	if (b < min)
		min = b;
	else
		min = a;

	return min;
}

int main()
{
	int n1, n2;
	
	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &n1);
	printf("����b�F");   scanf("%d", &n2);

	printf("�������ق��̒l��%d�ł��B\n", min2(n1, n2));

	getchar();
	getchar();
	return 0;
}