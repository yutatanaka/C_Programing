
/*
	���K4-8

	�ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤��List4-8�������������v���O�������쐬����B

	<�o�͌���>

	���̐����F15
	***************

	���̐����F0


	���̐����F-5


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("���̐����F");
	scanf("%d", &no);

	while (no-- > 0)
	{
		putchar('*');
	}
	if (no > 0)
		putchar('\n');

	getchar();
	return 0;
}