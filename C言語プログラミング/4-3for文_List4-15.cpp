
/*
	約数の列挙

	読み込んだ整数値の全約数を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;

	printf("整数値：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}