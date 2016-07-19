
/*
	演習3-8

	List3-15のプログラムを、条件演算子ではなくif文を用いて書き換えよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("それらの差は%dです。\n", n1 - n2);
	}
	else
	{
		printf("それらの差は%dです。\n", n2 - n1);
	}

	getchar();
	return 0;
}