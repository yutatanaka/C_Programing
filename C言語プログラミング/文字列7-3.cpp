
/*
	列数を示す数値を入力し、
	'a'～'z'の26文字を指定された列数に従って表示するプログラムを作成しなさい。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int max = 26;
	int i, col;

	/* 入力処理 */
	printf("列数を示す数値：");	scanf("%d", &col);

	for (i = 0; i < 26; i++)
	{
		if (i > 0 && (i % col) == 0)
		{
			printf("\n");
		}
		printf("%c", 'a' + i);
	}

	getchar();
	getchar();
	return 0;
}