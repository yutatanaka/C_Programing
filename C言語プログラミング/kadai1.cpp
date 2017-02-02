
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 3�����x�N�g�� */
typedef struct
{
	float x, y, z;

}VECTOR3;

/* Header���� */
typedef struct
{
	char fileName[4];			/* �f�[�^�t�@�C���� */
	char version;				/* �ϊ������R���o�[�^�̃o�[�W���� */
	short num;					/* �g���C�A���O���\���̐� */
	short vertexNumber;			/* ���_�� */
	short normalNumber;			/* �@���� */
	unsigned int offset;		/* �g���C�A���O���\���̂ւ̃I�t�Z�b�g */
	unsigned int vertexOffset;	/* ���_�f�[�^�ւ̃I�t�Z�b�g */
	unsigned int normalOffset;	/* �@���f�[�^�ւ̃I�t�Z�b�g */

}HEADER;
HEADER header;

/* �g���C�A���O���\���� */
typedef struct
{
	short vertexIndex[3];		/* ���_�C���f�b�N�X */
	short normalIndex;			/* �@���C���f�b�N�X */

}TRIANGLE;
TRIANGLE *triangleList;

typedef struct
{
	TRIANGLE *triangleList;		/* �g���C�A���O�����X�g */
	VECTOR3 *vertex;			/* 3�����̒��_�f�[�^�i�[�ꏊ */
	VECTOR3 *normal;			/* 3�����̖@���f�[�^�i�[�ꏊ */
}BODY;
BODY body;


typedef struct
{	
	float vertices[15];			/* �ꎞ�I�ȃf�[�^�i�[�ꏊ(���_�f�[�^) */
	int indices[4];				/* �ꎞ�I�ȃf�[�^�i�[�ꏊ(�C���f�b�N�X�f�[�^) */
}SHAPE;
SHAPE shape;

typedef struct
{
	char *s, *p;
}STRING;
STRING string;

/* �v���g�^�C�v�錾 */
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

/* �t�@�C������֐� */
bool isFileOperation(char* fileName, STRING *str)
{
	FILE *fp;
	long size;

	/* �t�@�C�������݂��Ȃ���΃G���[���� */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("�t�@�C���I�[�v�����s\n");
		return false;
	}

	/* �t�@�C���̃T�C�Y�����߂�*/
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	/* �T�C�Y�����Ƀt�@�C�����̃������m�ۂ��A�S�ď����� */
	str->s = (char*)malloc(size + 1);
	memset(str->s, '\0', size + 1);

	/* �t�@�C����ǂݍ��񂾂��ƃt�@�C������� */
	fread(str->s, sizeof(char), size, fp);
	fclose(fp);

	return true;
}

/* �����񑀍�֐� */
void StringOperation()
{

	/* �ړ��Ă̕�����̌������s���A�����܂œǂݔ�΂� */
	string.p = strstr(string.s, "vertex 4 {");
	string.p += strlen("vertex 4 {");

	int i = 0;
	/* �Y�����镶���łȂ���΁A*p��1�i�߂� */
	while (!isNumberString(*string.p)) string.p++;

	/* '}'�܂Ń��[�v���� */
	while (*string.p != '}')
	{
		/* �����ł���΃��[�v���� */
		if (isNumberString(*string.p))
		{
			shape.vertices[i] = atof(string.p);

			//printf("%f\n", vertices[i]);

			/* �����ł���΂�*p���P�i�߂� */
			while (isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}

	i = 0;
	header.vertexNumber = 0;
	/* '('�܂ŕ������ǂݔ�΂� */
	string.p = strstr(string.p, "4 V(");
	string.p += strlen("4 V(");
	/* ')'�܂Ń��[�v���� */
	while (*string.p != ')')
	{
		if (isNumberString(*string.p))
		{
			shape.indices[i] = atoi(string.p);
			header.vertexNumber++;
			//printf("%d", shape.indices[i]);

			/* �Y�����镶���łȂ����*p��i�߂� */
			while (!isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}

	i = 0;
	/* 3�����̒��_�f�[�^��x, y, z�̊e���ڂɊi�[ */
	for (int k = 0; k < 12; k += 3)
	{
		body.vertex[i].x = shape.vertices[k];
		body.vertex[i].y = shape.vertices[k+1];
		body.vertex[i].z = shape.vertices[k+2];
		i++;
	}
}

/* �l�p���O�p�ɕ�������֐� */
void TriangleSplit()
{


	/* 4���_�C���f�b�N�X�ł���� */
	int i = 0, k = 0;
	if (header.vertexNumber == 4)
	{
		/*
		short *indexs = body.triangleList[k].vertexIndex ;

		indexs[i] = shape.indices[0];
		indexs[i] = shape.indices[1];
		indexs[i] = shape.indices[2];
		*/

		/* 3���_*2�̌`�ɕ������� */
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
/* �x�N�g�������߂�֐� */
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

/* �o�͊֐� */
void Output()
{
	for (int i = 0; i < 4; i++)
	{
		printf("%f %f %f\n", body.vertex[i].x, body.vertex[i].y, body.vertex[i].z);
	}

	//printf("\n%d %d %d\n", shape.triangleIndices[0][0], shape.triangleIndices[0][1], shape.triangleIndices[0][2]);
	//printf("%d %d %d\n", shape.triangleIndices[1][0], shape.triangleIndices[1][1], shape.triangleIndices[1][2]);

}