
/*
	���K4-6

	�E�Ɏ����悤�ɁA�ǂݍ��܂ꂽ�����l�ȉ��ł��鐳�̋��������ɕ\������v���O�������쐬����B

	���o�͌��ʁ�

	���̐�������͂��Ă��������F19
	2 4 6 8 10 12 14 16 18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 2;
	
	/*if (no >= 2)
	{
		while (2 * i <= no)
		{
			printf("%d ", 2 * i++);

		}
		printf("\n");
	}*/

	while (i <= no)
	{
		printf("%d ", i);
		i += 2;
	}

	getchar();
	getchar();
	return 0;
}