
/*
	���K4-21

	�E�Ɏ����悤�ɁA�ǂݍ��񂾐�����ӂ̒����Ƃ��Ă������`��\������v���O�������쐬����B

	���o�͌��ʁ�

	�����`�����܂��B
	���i�ł����F3
	***
	***
	***
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("�����`�����܂��B");
	printf("���i�ł����F");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= len; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}