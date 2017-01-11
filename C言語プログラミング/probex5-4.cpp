
/*  
	probex5-3と同じ結果を得られるプログラムを、strlen関数を用いないで作りなさい
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *string;
	int i, len = 0;
	/* メモリ確保 */
	string = (char *)malloc(sizeof(char *) * 10);
	
	/* 入力処理 */
	printf("文字列を入力：");	scanf("%s", string);
	
	i = 0;
	while (string[i] != '\0')
	{
		len++;
		i++;
	}

	printf("文字列の長さ：%d文字\n", len);

	/* メモリ解放 */
	free(string);
	getchar();
	getchar();
	return 0;
}