
/*
	�񐔂��������l����͂��A
	'a'�`'z'��26�������w�肳�ꂽ�񐔂ɏ]���ĕ\������v���O�������쐬���Ȃ����B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int max = 26;
	int i, col;

	/* ���͏��� */
	printf("�񐔂��������l�F");	scanf("%d", &col);

	for (i = 0; i < 26; i++)
	{
		if (i > 0 && (i % col) == 0)
		{
			printf("\n");
		}
		printf("%c", 'a' + i);
	}

	getchar();
	getchar();
	return 0;
}