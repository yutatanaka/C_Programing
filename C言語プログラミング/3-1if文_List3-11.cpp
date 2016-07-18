
/*
	大きいほうの値を求める

	読み込んだ二つの整数値の大きいほうの値を表示
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
		printf("大きいほうの値は%dです。\n", n1);
	}
	else
	{
		printf("大きいほうの値は%dです。\n", n2);
	}

	getchar();
	return 0;
}