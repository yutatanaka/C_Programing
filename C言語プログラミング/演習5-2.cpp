
/*
	���K5-2

	List5-3�����������āA�擪���珇��5,4,3,2,1��������v���O������������B
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5];

	for (i = 0; i < 5; ++i)
		v[i] = 5 - i;
	for (i = 0; i < 5; ++i)
		printf("v[%d] = %d\n", i, v[i]);

	getchar();
	return 0;
}