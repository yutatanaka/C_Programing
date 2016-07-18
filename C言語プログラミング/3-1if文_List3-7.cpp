
/*
	等価演算子その２

	読み込んだ二つの整数値は等しいか
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("二つの整数を入力してください。");
	printf("整数1：");    scanf("%d", &n1);
	printf("整数2：");    scanf("%d", &n2);

	if (n1 != n2)
	{
		puts("それらの値は違います。");
	}
	else
	{
		puts("それらの値は同じです。");
	}

	getchar();
	return 0;
}