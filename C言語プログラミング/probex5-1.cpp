
/*
	キーボードから２つの文字列を入力し、その２つを結合した文字列を表示するプログラムを作成しなさい。
	ただし、最終的に出力する文字列は、strcpy()および、strcat()関数を用いて、2つの文字列を１つに統合したものにすること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* 文字型のポインタ変数の宣言 */
	char *str1;
	char *str2;
	int i;
	/* メモリの確保 */
	str1 = (char *)malloc(sizeof(char *) * 10);
	str2 = (char *)malloc(sizeof(char *) * 10);

	/* 入力処理 */
	printf("文字列１：");	scanf("%s", str1);
	printf("文字列２：");	scanf("%s", str2);

	/* 文字結合 */
	strcat(str1, str2);

	printf("結合した結果：%s", str1);

	/* メモリの解放 */
	free(str1);
	free(str2);
	getchar();
	getchar();
	return 0;
}