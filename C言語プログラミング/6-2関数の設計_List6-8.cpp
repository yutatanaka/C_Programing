
/*
	�l��Ԃ��Ȃ��֐����̂Q

	�E�����p�񓙕ӎO�p�`��\���i�֐��Łj
	<�o�͌���>
	�E�����p�񓙕ӎO�p�`�����܂��B
	�Z�ӁF5
	    *
	   **
	  ***
	 ****
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---����ch��n�A�����ĕ\��--- */
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main()
{
	int i, len;

	printf("�E�����p�񓙕ӎO�p�`�����܂��B\n");
	printf("�Z�ӁF");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}