
/*
	���K4-19

	�ǂݍ��񂾐����l�̑S�񐔂�\������List4-15�����������āA
	�񐔂̕\�����I��������ɁA�񐔂̌���\������
	�v���O�������쐬����B

	<�o�͌���>

	�����l�F4
	1
	2
	4
	�񐔂�3�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;
	int cnt = 0;
	
	printf("�����l�F");
	scanf("%d", &num);

	for (i = 1; i <= num; ++i)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			cnt++;
		}
	}

	printf("�񐔂�%d�ł��B", cnt);

	getchar();
	getchar();
	return 0;
}