
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	/* �t�@�C������֐� */
	FileOperation(fileName, &string);

	/* �����񑀍�֐� */
	StringOperation();

	/* 4���_�C���f�b�N�X�ł���� */
	i = 0;
	if (data.vertexNumber == 4)
	{
		/* 3���_*2�̌`�ɕ������� */
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

void StringOperation()
{
	int i;

	/* �ړ��Ă̕�����̌������s���A�����܂œǂݔ�΂� */
	string.p = strstr(string.s, "vertex 4 {");
	string.p += strlen("vertex 4 {");

	i = 0;
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
	data.vertexNumber = 0;
	/* '('�܂ŕ������ǂݔ�΂� */
	string.p = strstr(string.p, "4 V(");
	string.p += strlen("4 V(");
	/* ')'�܂Ń��[�v���� */
	while (*string.p != ')')
	{
		if (isNumberString(*string.p))
		{
			shape.indices[i] = atoi(string.p);
			data.vertexNumber++;
			printf("%d", shape.indices[i]);

			/* �Y�����镶���łȂ����*p��i�߂� */
			while (!isNumberString(*string.p)) string.p++;

			i++;
		}
		string.p++;
	}
}