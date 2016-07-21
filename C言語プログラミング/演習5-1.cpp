
/*
	演習5-1

	List5-3を書きかえて、先頭から順に0,1,2,3,4を代入するプログラムを作成せよ。
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