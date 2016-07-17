
/*
	単項の算術演算子

	読み込んだ整数値の符号を反転した値を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	printf("符号を反転した値は%dです。\n", -num);

	getchar();
	return 0;
}