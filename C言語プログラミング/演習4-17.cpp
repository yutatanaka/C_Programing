
/*
	���K4-17

	�E�Ɏ����悤�ɁA1����n�܂ł̐����l��2��l��\������v���O�������쐬����B

	<�o�͌���>

	n�̒l�F3
	1�̂Q���1
	2�̂Q���4
	3�̂Q���9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int num;

	printf("n�̒l�F");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d�̂Q���%d\n", i, i * i);
	}

	getchar();
	getchar();
	return 0;
}
