
/*
	演習5-2

	List5-3を書きかえて、先頭から順に5,4,3,2,1を代入するプログラムを代入せよ。
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