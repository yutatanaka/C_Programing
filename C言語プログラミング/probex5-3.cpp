
/*  
	キーボードから文字列を入力し、その文字列の長さを表示するプログラムを作る。この時strlen()関数を用いること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int len;

	/* メモリ確保 */
	string = (char *)malloc(sizeof(char *) * 10);

	/* 入力処理 */
	printf("文字列を入力：");	scanf("%s", string);
	/* 文字列の長さを求める */
	len = strlen(string);

	printf("文字列の長さ：%d文字\n", len);

	/* メモリ解放 */
	free(string);
	getchar();
	return 0;
}