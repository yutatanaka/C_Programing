
/*
	���񐔂̌J�Ԃ�

	�ǂݍ��񂾐����̉񐔂�������A���\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("���̐����F");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	getchar();
	return 0;
}