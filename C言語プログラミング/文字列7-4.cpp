
/*
	次のコードに追加し、入力された数値を16桁の2進数で表示するプログラムを作成させなさい
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char sbinary[17];
	int value;
	int i;

	printf("数値を入力：");	scanf("%d", &value);

	/* 配列 sbinaryに'0'か'1'を代入する */
	for (i = 15; i >= 0; i--)
	{
		sbinary[i] = '0' + (value % 2);
		value /= 2;
	}

	sbinary[16] = 0;

	printf("%s", sbinary);

	getchar();
	getchar();
	return 0;
}