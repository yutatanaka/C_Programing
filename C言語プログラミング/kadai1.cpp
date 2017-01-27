
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isNumberString(char);

/* Header部分 */
typedef struct
{
	char fileName[4];			/* データファイル名 */
	char version;				/* 変換したコンバータのバージョン */
	short num;					/* トライアングル構造体数 */
	short vertexNumber;			/* 頂点数 */
	short normalNumber;			/* 法線数 */
	unsigned int offset;		/* トライアングル構造体へのオフセット */
	unsigned int vertexOffset;	/* 頂点データへのオフセット */
	unsigned int normalOffset;	/* 法線データへのオフセット */

}DATAFORMAT;
DATAFORMAT data;

int main()
{
	int i, k;
	long size;
	int indices[4] = { 0 };
	int triangleIndices[][4] = { 0 };
	float vertices[15] = { 0 };
	char *fileName = "cube.mqo";
	char *str, *p;
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
	/* 該当する文字でなければ、*pを1つ進める */
	while (!isNumberString(*p)) p++;

	/* '}'までループを回す */
	while (*p != '}')
	{
		/* 文字であればループを回す */
		if (isNumberString(*p))
		{
			vertices[i] = atof(p);
			
			//printf("%f\n", vertices[i]);

			/* 文字であればを*pを１つ進める */
			while (isNumberString(*p)) p++;

			i++;
		}
		p++;
	}

	i = 0;
	data.vertexNumber = 0;
	/* '('まで文字列を読み飛ばす */
	p = strstr(p, "4 V(");
	p += strlen("4 V(");
	/* ')'までループを回す */
	while (*p != ')')
	{
		if (isNumberString(*p))
		{
			indices[i] = atoi(p);
			data.vertexNumber++;
			printf("%d", indices[i]);

			/* 該当する文字でなければ*pを進める */
			while (!isNumberString(*p)) p++;

			i++;
		}
		p++;
	}
	/* 4頂点インデックスであれば */
	int i = 0;
	if (data.vertexNumber == 4)
	{
		/* 3頂点*2の形に分解する */
		triangleIndices[i][0] = indices[0];
		triangleIndices[i][1] = indices[1];
		triangleIndices[i][2] = indices[2];

		i++;

		triangleIndices[i][0] = indices[0];
		triangleIndices[i][1] = indices[2];
		triangleIndices[i][2] = indices[3];
	}
	
	printf("\n%d %d %d\n", triangleIndices[0][0], triangleIndices[0][1], triangleIndices[0][2]);
	printf("%d %d %d\n", triangleIndices[1][0], triangleIndices[1][1], triangleIndices[1][2]);

	

	free(str);
	getchar();
	return 0;
}

bool isNumberString(char no)
{
	if ((no >= '0') && (no <= '9'))
	{
		return true;
	}
	if (no == '-')
	{
		return true;
	}
	if (no == '.')
	{
		return true;
	}
	return false;
}