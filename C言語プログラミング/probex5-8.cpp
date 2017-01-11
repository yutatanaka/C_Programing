
/*
	キーボードから3つの文字列を入力させ、そのうち最も長い文字列を表示するプログラムを作る
	ただし同じ長さの文字列が複数ある場合は、すべて表示させること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[3][10];
	int i, count = 1;
	int len[3], maxLen = 0;
	
	/* 入力処理 */
	for (i = 0; i < 3; i++)
	{
		printf("文字列%d：", count);	scanf("%s", str[i]);
		count++;
	}
		
	/* 各文字列の長さを求めて、最も長い文字列を表示 */
	for (i = 0; i < 3; i++)
	{
		len[i] = strlen(str[i]);
		if (len[i] >= maxLen)
		{
			maxLen = len[i];
		}
	}

	printf("\nもっとも長い文字列：\n");

	for (i = 0; i < 3; i++)
	{
		if (len[i] == maxLen)
		{
			printf("%s\n", str[i]);
		}
	}
	getchar();
	getchar();
	return 0;
}