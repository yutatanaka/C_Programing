
/*
	if���E���̂P

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
		puts("���̐��͂T�Ŋ���؂�܂���B");
	}

	getchar();
	return 0;
}