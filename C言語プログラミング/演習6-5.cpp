
/*
	演習6-5
	1からnまでの全整数の和を求めて返却する関数を作成せよ。
		int sumup(int n) {     }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumup(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int num;

	puts("整数を入力してください。");
	printf("整数：");   scanf("%d", &num);

	printf("1から%dまでの全整数の和は%dです。\n", num, sumup(num));

	getchar();
	getchar();
	return 0;
}