
/*
	List4-19�����������āA�E�㑤�����p�ƂȂ�
	���p�񓙕ӎO�p�`��\������v���O�������쐬����B

	<�o�͌���>

	�E�㒼�p�񓙕ӎO�p�`�����܂��B
	�Z�ӁF5
	*****
	 ****
	  ***
	   **
	    *
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("�E�㒼�p�񓙕ӎO�p�`�����܂��B");
	printf("�Z�ӁF");   scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		for (j = 0; j < len - i; j++)
			putchar('*');
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}