
/*
	演習7-1

	以下に示す各式の値を表示するプログラムを作成するとともに各式の値を説明せよ。

	sizeof 1	sizeof(unsigned)-1		sizeof n+2
	sizeof+1	sizeof(double)-1		sizeof(n+2)
	sizeof-1	sizeof((double)-1)		sizeof(n+2.0)
*/

#include <stdio.h>

int main()
{
	int n;

	printf("%u %u %u\n", sizeof 1, sizeof(unsigned)-1, sizeof n+2);
	printf("%u %u %u\n", sizeof + 1, sizeof(double) - 1, sizeof(n + 2));
	printf("%u %u %u\n", sizeof - 1, sizeof((double)-1), sizeof(n + 2.0));


	getchar();
	return 0;
}