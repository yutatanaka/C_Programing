
/*  
	文字列を入力し、その文字列の長さ(文字数)を表示するプログラムを作成しなさい
	＊ 標準関数を使用しないこと
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int i, len;
	/* メモリの確保 */
	string = (char *)malloc(50);
	
	/* 入力処理 */
	printf("文字列を入力：");	scanf("%s", string);
	
	i = 0;
	len = 0;
	/* 文字列の長さを図る */
	while (string[i] != '\0')
	{
		len++;
		i++;
	}

	printf("文字列%sの長さ：%d", string, len);

	/* メモリの解放 */
	free(string);
	getchar();
	getchar();
	return 0;
}