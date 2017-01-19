
/* 
	ファイル操作３　バイナリファイルを読み込んで文字列を表示する
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[60]; 
	char *fileName = "alphabet_bond.txt";
	FILE *fp;

	/* ファイルが存在しなければ */
	if ((fp = fopen(fileName, "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* ファイルを読み込む */
	fread(string, 1, 60, fp);
	/* ファイルを閉じる */
	fclose(fp);

	/* 出力 */
	printf("%s", string);

	getchar();
	return 0;
}