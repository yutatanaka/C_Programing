
/*
	��]�̔���

	�ǂݍ��񂾐����l�̍ŉ��ʌ��͂T�ł��邩
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	if ((num % 10) == 5)
	{
		puts("�ŉ��ʂ̌���5�ł��B");
	}
	else
	{
		puts("�ŉ��ʂ̌���5�ł͂���܂���B");
	}

	getchar();
	return 0;
}