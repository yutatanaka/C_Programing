
/*
	次のプログラムを作成しなさい。
	・文字列を入力する。
	・入力された文字列を逆順に表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int i, len;
	/* メモリの確保 */
	string = (char*)malloc(100);

	/* 入力処理 */
	printf("文字列を入力：");	scanf("%s", string);

	/* 文字列の長さを調べる */
	len = strlen(string);

	/* 文字列を逆から表示する */
	for (i = len; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	/* メモリの解放 */
	free(string);
	getchar();
	getchar();
	return 0;
}