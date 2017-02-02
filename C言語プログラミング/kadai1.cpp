
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 3次元ベクトル */
typedef struct
{
	float x, y, z;

}VECTOR3;

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

}HEADER;
HEADER header;

/* トライアングル構造体 */
typedef struct
{
	short vertexIndex[3];		/* 頂点インデックス */
	short normalIndex;			/* 法線インデックス */

}TRIANGLE;
TRIANGLE *triangleList;

typedef struct
{
	TRIANGLE *triangleList;		/* トライアングルリスト */
	VECTOR3 *vertex;			/* 3次元の頂点データ格納場所 */
	VECTOR3 *normal;			/* 3次元の法線データ格納場所 */
}BODY;
BODY body;


typedef struct
{	
	float vertices[15];			/* 一時的なデータ格納場所(頂点データ) */
	int indices[4];				/* 一時的なデータ格納場所(インデックスデータ) */
}SHAPE;
SHAPE shape;

typedef struct
{
	char *s, *p;
}STRING;
STRING string;

/* プロトタイプ宣言 */
bool isNumberString(char);
bool isFileOperation(char*, STRING*);
void StringOperation();
void TriangleSplit();
void VectorCalculations();
void SubVector3(VECTOR3*, VECTOR3, VECTOR3);
void Output();

int main()
{
	char *fileName = "cube.mqo";
	body.triangleList = (TRIANGLE *)malloc(sizeof(TRIANGLE) * 2);
	body.vertex = (VECTOR3*)malloc(sizeof(VECTOR3) * 4);
	body.normal = (VECTOR3*)malloc(sizeof(VECTOR3) * 4);

	isFileOperation(fileName, &string);

	StringOperation();

	TriangleSplit();

	VectorCalculations();

	Output();

	free(string.s);
	free(body.triangleList);
	free(body.vertex);
	free(body.normal);

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

/* ファイル操作関数 */
bool isFileOperation(char* fileName, STRING *str)
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

/* 文字列操作関数 */
void StringOperation()
{

	/* 目当ての文字列の検索を行い、そこまで読み飛ばす */
	string.p = strstr(string.s, "vertex 4 {");
	string.p += strlen("vertex 4 {");

	int i = 0;
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
	header.vertexNumber = 0;
	/* '('まで文字列を読み飛ばす */
	string.p = strstr(string.p, "4 V(");
	string.p += strlen("4 V(");
	/* ')'までループを回す */
	while (*string.p != ')')
	{
		if (isNumberString(*string.p))
		{
			shape.indices[i] = atoi(string.p);
			header.vertexNumber++;
			//printf("%d", shape.indices[i]);

			/* 該当する文字でなければ*pを進める */
			while (!isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}

	i = 0;
	/* 3次元の頂点データをx, y, zの各項目に格納 */
	for (int k = 0; k < 12; k += 3)
	{
		body.vertex[i].x = shape.vertices[k];
		body.vertex[i].y = shape.vertices[k+1];
		body.vertex[i].z = shape.vertices[k+2];
		i++;
	}
}

/* 四角を三角に分割する関数 */
void TriangleSplit()
{


	/* 4頂点インデックスであれば */
	int i = 0, k = 0;
	if (header.vertexNumber == 4)
	{
		/*
		short *indexs = body.triangleList[k].vertexIndex ;

		indexs[i] = shape.indices[0];
		indexs[i] = shape.indices[1];
		indexs[i] = shape.indices[2];
		*/

		/* 3頂点*2の形に分解する */
		body.triangleList[k].vertexIndex[i] = shape.indices[0];
		body.triangleList[k].vertexIndex[i] = shape.indices[1];
		body.triangleList[k].vertexIndex[i] = shape.indices[2];
		k++;
		i++;
		body.triangleList[k].vertexIndex[i] = shape.indices[0];
		body.triangleList[k].vertexIndex[i] = shape.indices[3];
		body.triangleList[k].vertexIndex[i] = shape.indices[2];
	}
}
/* ベクトルを求める関数 */
void VectorCalculations()
{
	VECTOR3 AB, AC;
	VECTOR3 A = body.vertex[0];
	VECTOR3 B = body.vertex[1];
	VECTOR3 C = body.vertex[2];
	//VECTOR3 AB = B - A;
	
	SubVector3(&AB, body.vertex[0], body.vertex[1]);
	SubVector3(&AC, body.vertex[0], body.vertex[2]);

}

void SubVector3(VECTOR3 *result, VECTOR3 start, VECTOR3 end)
{
	result->x = end.x - start.x;
	result->y = end.y - start.y;
	result->z = end.z - start.z;
}

/* 出力関数 */
void Output()
{
	for (int i = 0; i < 4; i++)
	{
		printf("%f %f %f\n", body.vertex[i].x, body.vertex[i].y, body.vertex[i].z);
	}

	//printf("\n%d %d %d\n", shape.triangleIndices[0][0], shape.triangleIndices[0][1], shape.triangleIndices[0][2]);
	//printf("%d %d %d\n", shape.triangleIndices[1][0], shape.triangleIndices[1][1], shape.triangleIndices[1][2]);

}