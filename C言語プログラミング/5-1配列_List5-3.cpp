
/*
	�z��̑������̂Q

	�z��̊e�v�f�ɐ퓬���珇��1,2,3,4,5�������ĕ\��(for��)
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5];		/* int[5]�^�̔z�� */

	for (i = 0; i < 5; i++)
	{
		v[i] = i + 1;
	}
	for (i = 0; i < 5; i++)
	{
		printf("v[%d] = %d\n", i, v[i]);
	}

	getchar();
	return 0;
}