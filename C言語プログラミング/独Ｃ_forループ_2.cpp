
/*
	17から100の間で17で割り切れる数を表示するプログラムを作成してください。
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