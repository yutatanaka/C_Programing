
/*
	以下の条件と、実行結果の例をもとにして、キーボードから入力した文字列を反転させるプログラムを作る
	(1)文字列の長さの最大値は16文字
	(2)キーボードから入力された文字列を、その長さ＋１の配列変数をmalloc()で生成させて代入する
	(3)2で生成させた文字列に、入力させた文字列を反転させたデータを入れる
	(4)結果を出力する
	(5)生成したメモリを、free()で解放する
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
	string = (char *)malloc(16 + 1);

	/* 入力処理 */
	printf("文字列：");	scanf("%s", string);

	/* 長さを求める */
	len = strlen(string);

	for (i = len-1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	free(string);
	getchar();
	getchar();
	return 0;
}