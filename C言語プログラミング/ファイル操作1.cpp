
/*
	ファイル操作　a～zをテキストファイルに入力し、出力
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *fileName = "alphabet.txt";
	FILE *fp;
	

	/* ファイルオープン */
	fp = fopen(fileName, "w");
	/* ファイルに書き込み */
	fwrite(str, 26, 1, fp);
	fprintf(fp, "\n%s", str);
	
	/* ファイルクローズ */
	fclose(fp);
	getchar();
	return 0;
}