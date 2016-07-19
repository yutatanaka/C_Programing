
/*
	演習3-5

	等価演算子や関係演算子が、1あるいは0の値を生成することを確認するプログラムを作成せよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int num1, num2, num3, min;

	puts("整数1：");   scanf("%d", &num1);
	puts("整数2：");   scanf("%d", &num2);
	puts("整数3：");   scanf("%d", &num3);

	min = num1;
	if (num2 < min)
	{
		min = num2;
	}
	if (num3 < min)
	{
		min = num3;
	}

	printf("最小値は%dです。\n", min);
	*/

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a < b);
	printf("%d\n", c);

	c = (a > b);
	printf("%d\n", c);

	c = (a == b);
	printf("%d\n", c);

	getchar();
	return 0;
}