
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
	char *str2;
	float value;

	// バッファサイズ分初期化
	memset(str, '\0', BUFFER_SIZE);

	// ファイルを読み込みモードで開く
	fp = fopen(fileName, "r");

	// ファイルオープンに失敗した場合
	if (fp == NULL)
	{
		printf("%sを開けませんでした。\n", fileName);
		return -1;
	}

	/*
	fseek(fp, 0, SEEK_END);
	fileSize = ftell(fp);
	char *buffer = new char[fileSize];
	fseek(fp, 0, SEEK_SET);
	*/

	while (1)
	{
		// 1文字ずつ読み込む
		tmp = fgetc(fp);

		// ファイルの終端だったらループ終了
		if (tmp == EOF)
		{
			break;
		}

		// 改行文字だったらなにもしない
		if (tmp == '\n')
		{
			continue;
		}

		// 文字列バッファへ値を格納
		str[i++] = (char)tmp;
	}

	str2 = strstr(str, "vertex 4");
	str2 += strlen("vertex 4");
	//printf("%s\n", str2);

	while (*str2 != '}')
	{
		if ((*str2 >= '0') && (*str2 <= '9') || (*str2 == '-'))
		{
			value = atof(str2);
			//printf("%f\n", value);
			strstr(str2, " ");
			printf("%f\n", value);
		}
		++str2;
	}
	//printf("%f\n", value);


	/* ファイルクローズ */
	fclose(fp);

	getchar();
	return 0;
}