
/*
	文字列を入力し、
	文字列中のアルファベット小文字を大文字に変換して表示するプログラムを作成しなさい
	＊printf関数を1回だけ使用する(1文字ずつ表示してはいけない)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int i;
	/* メモリの確保 */
	string = (char*)malloc(20 * sizeof(char*));

	

	/* メモリの解放 */
	free(string);
	getchar();
	return 0;
}