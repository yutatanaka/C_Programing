
/*
	probex5-5.と同じ結果が得られるものを、strcmp()関数を用いずに作る
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ポインタ変数の宣言 */
	char *str1, *str2;
	int i;
	
	/* メモリの確保 */
	str1 = (char *)malloc(sizeof(char *));
	str2 = (char *)malloc(sizeof(char *));

	/* 入力処理 */
	printf("文字列１：");	scanf("%s", str1);
	printf("文字列２：");	scanf("%s", str2);

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
		{
			printf("同じものです\n");
			return 0;
		}
		i++;
	}
	printf("違うものです\n");

	/* メモリ解放 */
	free(str1);
	free(str2);
	getchar();
	return 0;
}