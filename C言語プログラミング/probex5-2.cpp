
/* 
	probex5-1と同じ結果を得られるプログラムを、strcpy()やstrcat関数といった、文字列操作関数を用いずに作りなさい
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *str1;
	char *str2;
	char *string;
	int i, j;
	int len1, len2;
	/* メモリ確保 */
	str1 = (char *)malloc(sizeof(char *) * 10);
	str2 = (char *)malloc(sizeof(char *) * 10);
	string = (char *)malloc(sizeof(char *) * 10);

	/* 入力処理 */
	printf("文字列１：");	scanf("%s", str1);
	printf("文字列２：");	scanf("%s", str2);

	/* 文字結合 */
	i = 0;
	while (str1[i] != '\0')
	{
		string[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		string[i + j] = str2[j];
		j++;
	}

	string[i + j] = '\0';
	
	/* 表示処理 */
	printf("結合した結果： %s\n", string);

	/* メモリ解放 */
	free(str1);
	free(str2);
	free(string);
	getchar();
	getchar();
	return 0;
}