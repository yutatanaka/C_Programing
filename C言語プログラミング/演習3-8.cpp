
/*
	���K3-8

	List3-15�̃v���O�������A�������Z�q�ł͂Ȃ�if����p���ď���������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("�����̍���%d�ł��B\n", n1 - n2);
	}
	else
	{
		printf("�����̍���%d�ł��B\n", n2 - n1);
	}

	getchar();
	return 0;
}