
/*
	switch����break��

	�ǂݍ��񂾐����l���R�Ŋ�������]��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no % 3 == 0)
	{
		puts("���̐���3�Ŋ���؂�܂�");
	}
	else if (no % 3 == 1)
	{
		puts("���̐���3�Ŋ�������]��1�ł��B");
	}
	else
	{
		puts("���̐���3�Ŋ�������]��2�ł��B");
	}

	getchar();
	return 0;
}