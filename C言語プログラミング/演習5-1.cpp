
/*
	���K5-1

	List5-3�����������āA�擪���珇��0,1,2,3,4��������v���O�������쐬����B
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5];

	for (i = 0; i < 5; i++)
	{
		v[i] = i * 1;
	}
	for (i = 0; i < 5; i++)
	{
		printf("v[%d] = %d\n", i, v[i]);
	}

	getchar();
	return 0;
}