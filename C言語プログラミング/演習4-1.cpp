
/*
	���K4-1

	�ǂݍ��񂾐����l�̕����𔻒肷��List3-9���A
	���́E�\�����D���Ȃ����J��Ԃ���悤�ɕύX�����v���O�������쐬����B
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, retry;


	do {
		printf("��������͂��Ă��������F");
		scanf("%d", &no);

		if (no == 0)
		{
			puts("���̐���0�ł��B");
		}
		else if (no > 0)
		{
			printf("���̐��͐��ł��B\n");
		}
		else if (no < 0)
		{
			printf("���̐��͕��ł��B\n");
		}

		printf("�����܂����H�yYes�c0 / No�c9�z:");
		scanf("%d", &retry);

	} while (retry == 0);

	getchar();
	return 0;
}