
/*
	��̔���

	�ǂݍ��񂾐����l�͊��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no % 2)
	{
		puts("���̐��͊�ł��B");
	}

	getchar();
	return 0;
}