
/*
	次のプログラムを作成しなさい。
	・文字列を入力する。
	・入力された文字列を表示する。
	＊文字列の入力にはscanf関数を使用する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int len;

	/* メモリの確保 */
	string = (char *)malloc(20);
	
	/* 文字列の入力処理 */
	printf("文字列：");	scanf("%s", string);

	printf("%s", string);


	/* メモリの解放 */
	free(string);
	getchar();
	return 0;
}