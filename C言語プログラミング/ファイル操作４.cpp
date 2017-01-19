
/*
	バイナリファイルを読み込んで表示、２つのテキストを別々に表示できるようにする
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *p, *pp, *string;
	int dataSize = 10;
	long size;
	FILE *fp;

	/* ファイルが存在しなければエラ―処理 */
	if ((fp = fopen("alphabet_bond.txt", "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* ファイルのサイズを求める */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	
	/* サイズ分＋ヌル文字のメモリ確保 */
	string = (char*)malloc(size);

	/* ファイルを読み込む */
	fread(string, 1, size, fp);

	/* 全体のデータサイズ分メモリ確保 */
	p = (char*)malloc(dataSize);

	/* ポインタ変数ppにpのアドレスをコピー */
	pp = p;
	*(int*)pp = dataSize;
	pp += 4;
	memcpy(pp, string, size);
	/* ファイルを閉じる */
	fclose(fp);

	fp = fopen("alphabet_data.txt", "wb");
	fwrite(p, sizeof(char), dataSize, fp);

	fclose(fp);

	free(string);
	free(p);
	getchar();
	return 0;
}