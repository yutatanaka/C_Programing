
/*
	演習3-6
	
	三つの整数値を読み込んで、その最長値を求めて表示するプログラムを作成せよ。
	＊if文を利用すること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, max;

	puts("三つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);
	printf("整数3：");   scanf("%d", &n3);

	max = n1;

	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}

	printf("最大値は%dです。\n", max);

	getchar();
	return 0;
}