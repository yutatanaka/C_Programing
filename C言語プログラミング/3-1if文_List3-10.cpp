
/*
	����q�ɂȂ���if��

	�ǂݍ��񂾐����l�̕����𔻒�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no > 0)
	{
		if (no % 2 == 0)
		{
			puts("���̐��͋����ł��B");
		}
		else 
		{
			puts("���̐��͊�ł��B");
		}
	}
	else
	{
		puts("���łȂ��l�����͂���܂����B\a\n");
	}

	getchar();
	return 0;
}