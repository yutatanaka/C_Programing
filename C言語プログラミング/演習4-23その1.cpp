
/*
	List4-18�����������āA���㑤�����p�ƂȂ�
	���p�񓙕ӎO�p�`��\������v���O�������쐬����B

	<�o�͌���>

	���㒼�p�񓙕ӎO�p�`�����܂��B
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

	puts("���㒼�p�񓙕ӎO�p�`�����܂��B");
	printf("�Z��:");   scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}