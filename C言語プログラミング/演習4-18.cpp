
/*
	���K4-18

	�����l��ǂݍ���ŁA���̌�����'*'��\������v���O�������쐬����B

	<�o�͌���>

	����*��\�����܂����F12
	*****
	*****
	**
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;

	printf("����*��\�����܂����F");
	scanf("%d", &num);

	for (i = 0; i < num; ++i)
	{
		if (i % 5 == 0)
		{
			putchar('\n');
		}
			putchar('*');
	}

	getchar();
	getchar();
	return 0;
}