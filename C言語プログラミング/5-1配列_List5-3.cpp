
/*
	zρΜΈ»ΜQ

	zρΜevfΙν¬©ηΙ1,2,3,4,5πγό΅Δ\¦(forΆ)
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5];		/* int[5]^Μzρ */

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