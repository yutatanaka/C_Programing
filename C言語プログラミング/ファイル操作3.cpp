
/* 
	ファイル操作３　バイナリファイルを読み込んで文字列を表示する
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *string; 
	char *fileName = "alphabet_bond.txt";
	long size;
	FILE *fp;

	/* ファイルが存在しなければ */
	if ((fp = fopen(fileName, "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* ファイルのサイズを求める */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	string = (char*)malloc(size + 1);
	memset(string, '\0', size + 1);

	/* ファイルを読み込む */
	fread(string, 1, size, fp);
	/* ファイルを閉じる */
	fclose(fp);

	/* 出力 */
	printf("%s", string);
	
	free(string);
	getchar();
	return 0;
}