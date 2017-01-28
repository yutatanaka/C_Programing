
/*
	キーボードから入力された整数が偶数か奇数かを判定するプログラムを作成してください。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Even_OddNumber(int*);

int main()
{
	int value = 0;
	printf("数値を入力してください：");
	scanf("%d", &value);
	Even_OddNumber(&value);

	getchar();
	return 0;
}

void Even_OddNumber(int *value)
{
	if (*value % 2 == 0)
	{
		printf("偶数です。\n", *value);
	}
	else if (*value % 2 != 0)
	{
		printf("奇数です。\n", *value);
	}
}