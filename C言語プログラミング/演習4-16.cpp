
/*
	���K4-16

	�����l��ǂݍ���ŁA���̐����ȉ��̊��\������v���O�������쐬����B

	<�o�͌���>
	�����l�F15
	1 3 5 7 9 11 13 15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;
	
	printf("�����l�F");   scanf("%d", &num);

	for (i = -1; i <= num; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);

	}

	getchar();
	getchar();
	return 0;
}