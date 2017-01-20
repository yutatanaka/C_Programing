
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	long size;
	float vertex[15] = { 0 };
	char *fileName = "cube.mqo";
	char *str, *p, *pp;
	FILE *fp;
	
	/* ファイルが存在しなければエラー処理 */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("ファイルオープン失敗\n");
		return -1;
	}

	/* ファイルのサイズを求める*/
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	
	/* サイズを元にファイル分のメモリ確保し、全て初期化 */
	str = (char*)malloc(size + 1);
	memset(str, '\0', size + 1);
	
	/* ファイルを読み込んだあとファイルを閉じる */
	fread(str, sizeof(char), size, fp);
	fclose(fp);

	/* 目当ての文字列の検索を行い、そこまで読み飛ばす */
	p = strstr(str, "vertex 4 {");
	p += strlen("vertex 4 {");

	i = 0;
	while (*p != '}')
	{
		if ((*p >= '0') && (*p <= '9') || (*p == '-'))
		{
			vertex[i] = atof(p);
			printf("%f\n", vertex[i]);

			while (*p != ' ')
			{
				p++;
			}
			i++;
		}
		p++;
	}
	
	free(str);
	getchar();
	return 0;
}