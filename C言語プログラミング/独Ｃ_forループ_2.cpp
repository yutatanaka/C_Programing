
/*
	17����100�̊Ԃ�17�Ŋ���؂�鐔��\������v���O�������쐬���Ă��������B
*/

#include <stdio.h>

int main()
{
	int i;

	for (i = 17; i <= 100; i++)
	{
		if (i % 17 == 0)
		{
			printf("%d\n", i);
		}
	}

	getchar();
	return 0;
}