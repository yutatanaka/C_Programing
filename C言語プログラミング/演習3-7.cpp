
/*
	演習3-7

	四つの整数値を読み込んで、その最大値を求めて表示するプログラムを作成せよ。
	＊if文を利用すること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, max;

	puts("四つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);
	printf("整数3：");   scanf("%d", &n3);
	printf("整数4：");   scanf("%d", &n4);

	max = n1;
	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}
	if (n4 > max)
	{
		max = n4;
	}

	printf("最大値は%dです。", max);

	getchar();
	return 0;
}