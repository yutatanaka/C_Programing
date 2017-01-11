
/*
	キーボードから2つの文字列を入力し、2つが同じものならば、「同じものです」と表示し、
	違うのならば「違うものです」と表示するプログラムを作る　
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *str1, *str2;
	/* メモリ確保 */
	str1 = (char *)malloc(sizeof(char *));
	str2 = (char *)malloc(sizeof(char *));

	/* 入力処理 */
	printf("文字列１：");	scanf("%s", str1);
	printf("文字列２：");	scanf("%s", str2);

	/* 二つの文字列が同じかどうか判定 */
	if (strcmp(str1, str2) == 0)
	{
		printf("同じものです。\n");
	}
	else
	{
		printf("違うものです。\n");
	}

	getchar();
	getchar();
	return 0;
}