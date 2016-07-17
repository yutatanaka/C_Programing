
/*
	等価演算子

	読み込んだ二つの演算子
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	if (n1 == n2)
	{
		puts("それらの値は同じです。");
	}
	else
	{
		puts("それらの値は違います。");
	}

	getchar();
	return 0;
}