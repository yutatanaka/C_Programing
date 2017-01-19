
/*
	バイナリファイルを読み込む(ヘッダ情報を追加したファイル)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *p, *pp;
	long size;
	char *string;
	int *dataSize;
	FILE *fp;

	/* ファイルが存在しなければエラー処理 */
	if ((fp = fopen("alphabet_data.txt", "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}
	
	/* ファイルのサイズを求める */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	/* ファイルのサイズ分だけメモリを確保 */
	p = (char*)malloc(size + 1);
	//memset(p, '\0', size + 1);

	/* ファイルの読み込み */
	fread(p, 1, size, fp);
	dataSize = (int*)malloc(4);
	string = (char*)malloc(7);
	memset(string, '\0', 7);

	pp = p;
	memcpy(dataSize, pp, 4);
	pp += 4;
	memcpy(string, pp, 6);
	/* ファイルクローズ */
	fclose(fp);

	/* 出力 */
	printf("%d %s", *dataSize, string);

	free(p);
	free(string);
	getchar();
	return 0;
}