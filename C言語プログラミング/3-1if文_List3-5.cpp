
/*
	��[���̔���

	�ǂݍ��񂾐����l�̓[�����ǂ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("��������͂��Ă��������G");   scanf("%d", &num);

	if (num)
	{
		puts("���̐��̓[���ł͂���܂���B");
	}
	else
	{
		puts("���̐��̓[���ł��B");
	}

	getchar();
	return 0;
}