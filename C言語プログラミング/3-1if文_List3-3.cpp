
/*
	if���E���̂Q

	�ǂݍ��񂾐����l�͂T�Ŋ���؂�Ȃ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("���̐���5�Ŋ���؂�܂���B");
	}
	else
	{
		puts("���̐���5�Ŋ���؂�܂��B");
	}

	getchar();
	return 0;
}