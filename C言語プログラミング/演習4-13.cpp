
/*
	���K4-13

	1����n�܂ł̘a�����߂�v���O�������쐬����B
	n�̒l�̓L�[�{�[�h����ǂݍ��ނ��ƁB

	<�o�͌���>

	n�̒l�F5
	1����5�܂ł̘a��15�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	int n, tmp;

	printf("n�̒l�F");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		sum += i + 1;
	}

	printf("1����%d�܂ł̘a��%d�ł��B", n, sum);
	getchar();
	return 0;
}