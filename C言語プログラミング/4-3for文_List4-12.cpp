
/*
	for���ɂ����񐔂̌J�Ԃ�

	�ǂݍ��񂾐����̌���������A���\��(for��)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐����F");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
	{
		putchar('*');
	}
	putchar('\n');

	getchar();
	return 0;
}