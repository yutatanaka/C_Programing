
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

typedef struct
{
	float x, y, z;
	
}VECTOR3;

typedef struct
{
	VECTOR3 vertex[4];
	float vertices[15];
	int indices[4];
	int triangleIndices[][3];
}SHAPE;
SHAPE shape;

typedef struct
{
	char *s, *p;
}STRING;
STRING string;

bool isNumberString(char);
bool FileOperation(char*, STRING*);
void StringOperation();


int main()
{
	int i, k;

	char *fileName = "cube.mqo";

	/* ファイル操作関数 */
	FileOperation(fileName, &string);

	/* 文字列操作関数 */
	StringOperation();

	/* 4頂点インデックスであれば */
	i = 0;
	if (data.vertexNumber == 4)
	{
		/* 3頂点*2の形に分解する */
		shape.triangleIndices[i][0] = shape.indices[0];
		shape.triangleIndices[i][1] = shape.indices[1];
		shape.triangleIndices[i][2] = shape.indices[2];

		i++;

		shape.triangleIndices[i][0] = shape.indices[0];
		shape.triangleIndices[i][1] = shape.indices[2];
		shape.triangleIndices[i][2] = shape.indices[3];
	}
	
	printf("\n%d %d %d\n", shape.triangleIndices[0][0], shape.triangleIndices[0][1], shape.triangleIndices[0][2]);
	printf("%d %d %d\n", shape.triangleIndices[1][0], shape.triangleIndices[1][1], shape.triangleIndices[1][2]);


	
	

	free(string.s);
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

bool FileOperation(char* fileName, STRING *str)
{
	FILE *fp;
	long size;

	/* ファイルが存在しなければエラー処理 */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("ファイルオープン失敗\n");
		return false;
	}

	/* ファイルのサイズを求める*/
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	/* サイズを元にファイル分のメモリ確保し、全て初期化 */
	str->s = (char*)malloc(size + 1);
	memset(str->s, '\0', size + 1);

	/* ファイルを読み込んだあとファイルを閉じる */
	fread(str->s, sizeof(char), size, fp);
	fclose(fp);

	return true;
}

void StringOperation()
{
	int i;

	/* 目当ての文字列の検索を行い、そこまで読み飛ばす */
	string.p = strstr(string.s, "vertex 4 {");
	string.p += strlen("vertex 4 {");

	i = 0;
	/* 該当する文字でなければ、*pを1つ進める */
	while (!isNumberString(*string.p)) string.p++;

	/* '}'までループを回す */
	while (*string.p != '}')
	{
		/* 文字であればループを回す */
		if (isNumberString(*string.p))
		{
			shape.vertices[i] = atof(string.p);

			//printf("%f\n", vertices[i]);

			/* 文字であればを*pを１つ進める */
			while (isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}

	i = 0;
	data.vertexNumber = 0;
	/* '('まで文字列を読み飛ばす */
	string.p = strstr(string.p, "4 V(");
	string.p += strlen("4 V(");
	/* ')'までループを回す */
	while (*string.p != ')')
	{
		if (isNumberString(*string.p))
		{
			shape.indices[i] = atoi(string.p);
			data.vertexNumber++;
			printf("%d", shape.indices[i]);

			/* 該当する文字でなければ*pを進める */
			while (!isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}
}