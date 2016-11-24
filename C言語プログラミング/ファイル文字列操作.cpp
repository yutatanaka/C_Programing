
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// ファイル構造体へのポインタを宣言
	FILE *fp;
	char *fileName = "cube.mqo";
	long fileSize;
	char *buffer;
	int n;

	// ファイルを書き込みモードで開く
	fp = fopen(fileName, "r");

	// ファイルオープンに失敗した場合
	if (fp == NULL)
	{
		// 失敗と表示し終了
		printf("ファイルオープン失敗\n");
		return -1;
	}

	fseek(fp, 0, SEEK_END);
	fileSize = ftell(fp);
	buffer = new char[fileSize];
	fseek(fp, 0, SEEK_SET);

	fgetc()

	fclose(fp);

	getchar();
	return 0;
}