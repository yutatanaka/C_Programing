
/*
	���K4-25

	�E�Ɏ����悤�ɁA�ǂݍ��񂾐��̒i�����������������s���~�b�h��\������v���O�������쐬����B
	��i�s�ڂɂ�i % 10�ɂ���ē����鐔����\�����邱�ƁB

	<�o�͌���>

	�����������s���~�b�h�����܂��B
	���i�ł����F3
	11111
	 222
	  3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, n;

	puts("�����������s���~�b�h�����܂��B");
	printf("���i�ł����F");   scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		for (j = 1; j <= 2 * (n - i) + 1; j++)
		{
			printf("%d", i % 10);
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}