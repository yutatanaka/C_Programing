
/*
	���K���2.4��2.�̓������C���N�������g���Z�q�܂��̓f�N�������g���Z�q���g���ď��������Ă��������B
*/

#include <stdio.h>

int main()
{
	int i;

	for (i = 100; i >= 17;)
	{
		if ((i % 17) == 0)
		{
			printf("%d\n", i);
		}
		i--;
	}

	getchar();
	return 0;
}