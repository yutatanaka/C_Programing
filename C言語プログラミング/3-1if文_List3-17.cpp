
/*
	�_�����Z�q

	�ǂݍ��񂾌��̋G�߂�\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;					/* �� */
	printf("�����ł����F");
	scanf("%d", &month);

	if (month >= 3 && month <= 5)
	{
		printf("%d���͏t�ł��B\n", month);
	}
	else if (month >= 6 && month <= 8)
	{
		printf("%d���͉Ăł��B\n", month);
	}
	else if (month >= 9 && month <= 11)
	{
		printf("%d���͏H�ł��B\n", month);
	}
	else if (month == 1 || month == 2 || month == 12)
	{
		printf("%d���͓~�ł��B\n", month);
	}
	else
	{
		printf("%d���Ȃ�Ă���܂����B\a\n", month);
	}

	getchar();
	return 0;
}