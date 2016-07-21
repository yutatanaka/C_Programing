
/*
	配列の走査その２

	配列の各要素に戦闘から順に1,2,3,4,5を代入して表示(for文)
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5];		/* int[5]型の配列 */

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