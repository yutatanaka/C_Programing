
/*
	�������Z�q

	�ǂݍ��񂾓�̉��Z�q
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("��̐�������͂��Ă�������");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	if (n1 == n2)
	{
		puts("�����̒l�͓����ł��B");
	}
	else
	{
		puts("�����̒l�͈Ⴂ�܂��B");
	}

	getchar();
	return 0;
}