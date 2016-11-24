
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 101277

int main()
{
	// ファイル構造体へのポインタを宣言
	FILE *fp;
	char *fileName = "cube.mqo";
	int tmp = 0;
	int i = 0;
	long fileSize;
	char str[BUFFER_SIZE];

	// ファイルを書き込みモードで開く
	fp = fopen(fileName, "r");

	// ファイルオープンに失敗した場合
	if (fp == NULL)
	{
		// 失敗と表示し終了
		printf("%sを開けませんでした。\n", fileName);
		return -1;
	}

	/*fseek(fp, 0, SEEK_END);
	fileSize = ftell(fp);
	char *buffer = new char[fileSize];
	fseek(fp, 0, SEEK_SET);
*/

	while (1)
	{
		// 1文字ずつ読み込み
		tmp = fgetc(fp);

		// ファイルの終端だったらループ終了
		if (tmp == EOF)
		{
			break;
		}

		// 改行文字だったら何もしない
		if (tmp == '\n')
		{
			continue;
		}
		
		// 文字列ﾊﾞｯﾌｧへ値を格納
		str[i++] = (char)(tmp);
	}

	// 文字列表示
	printf("%s\n", str);

	fclose(fp);

	
	getchar();
	//delete buffer;
	return 0;
}