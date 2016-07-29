
/* 1～1000までの素数の個数を求めよ。 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sosu(int min, int max)
{
	int i;
	int sum = 0;

	/* 入力した値を読み込んでその回数まで繰り返す */
	for (i = min; i <= max; i++)
	{
		min /= 10;
		printf("%d", min /= 10);
		sum++;
	}
	return sum;
}

int main()
{
	int i;
	int min, max;
	
	printf("整数を二つ入力してください。\n");
	printf("最小値：");		scanf("%d", &min);
	printf("最大値：");		scanf("%d", &max);

	printf("%d～%dまでの素数の個数は%d個です。", min, max, sosu(min, max));

	getchar();
	getchar();
	return 0;
}