
/*
	���K4-24

	�E�Ɏ����悤�ɁA�ǂݍ��񂾐����̒i�������s���~�b�h��\������v���O�������쐬����B
	�q���g�F��i�s�ڂɂ�(i - 1) * 2 + 1��'*'�L����\�����邱�ƂɂȂ�B

	<�o�͌���>

	�s���~�b�h�����܂��B
	���i�ł����F3
	  *
	 ***
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, n;

	puts("�s���~�b�h�����܂��B");
	printf("���i�ł����F");   scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = n - i; j > 0; j--)
			putchar(' ');
		for (j = 1; j <= (i - 1) * 2 + 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}