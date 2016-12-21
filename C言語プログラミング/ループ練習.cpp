
/*
	Hello World![改行]を5回表示させてください。
	ループ構文を利用して、print等は1回の使用にとどめてみてください
*/

#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("Hello World!\n");
	}

	getchar();
	return 0;
}