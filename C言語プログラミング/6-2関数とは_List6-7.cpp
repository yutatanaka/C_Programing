
/*
	�֐��̐݌v

	�l��Ԃ��Ȃ��֐�
	<�o�͌���>
	�������p�񓙕ӎO�p�`�����܂��B
	�Z�ӁF5
	*
	**
	***
	****
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---�L������'*'��n�A�����ĕ\��--- */
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main()
{
	int i, len;

	printf("�������p�񓙕ӎO�p�`�����܂��B\n");
	printf("�Z�ӁF");   scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		put_stars(i);
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}