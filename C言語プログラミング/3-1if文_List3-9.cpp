
/*
	�֌W���Z�q

	�ǂݍ��񂾐����l�̕����𔻒�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);
	
	if (no == 0)
	{
		puts("���̐���0�ł��B");
	}
	else if (no > 0)

	{
		puts("���̐��͐��ł��B");
	}
	else
	{
		puts("���̐��͕��ł��B");
	}

	getchar();
	return 0;
}