
/*
	���K5-3

	List5-5�����������āA�擪���珇��5,4,3,2,1�ŏ���������v���O�������쐬����B
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5] = { 5, 4, 3, 2, 1 };

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	getchar();
	return 0;
}