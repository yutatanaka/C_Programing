
/*
	偶数の列挙

	読み込んだ整数値以下の偶数を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, n;
	printf("整数値：");
	scanf("%d", &n);

	for (i = 2; i <= n; i += 2)
	{
		printf("%d ", i);
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}