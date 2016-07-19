
/*
	複合文(ブロック)

	読み込んだ二つの整数値の大きいほうの値と小さいほうの値を求めて表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max, min;

	puts("二つの整数を入力してください。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	if (n1 > n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}

	printf("大きいほうの値は%dです。\n", max);
	printf("小さいほうの値は%dです。\n", min);

	getchar();
	getchar();

	return 0;
}