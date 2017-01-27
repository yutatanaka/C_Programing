
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isNumberString(char);

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

	/* �t�@�C�������݂��Ȃ���΃G���[���� */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("�t�@�C���I�[�v�����s\n");
		return -1;
	}

	/* �t�@�C���̃T�C�Y�����߂�*/
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	/* �T�C�Y�����Ƀt�@�C�����̃������m�ۂ��A�S�ď����� */
	str = (char*)malloc(size + 1);
	memset(str, '\0', size + 1);

	/* �t�@�C����ǂݍ��񂾂��ƃt�@�C������� */
	fread(str, sizeof(char), size, fp);
	fclose(fp);

	/* �ړ��Ă̕�����̌������s���A�����܂œǂݔ�΂� */
	p = strstr(str, "vertex 4 {");
	p += strlen("vertex 4 {");

	i = 0;
	/* �Y�����镶���łȂ���΁A*p��1�i�߂� */
	while (!isNumberString(*p)) p++;

	/* '}'�܂Ń��[�v���� */
	while (*p != '}')
	{
		/* �����ł���΃��[�v���� */
		if (isNumberString(*p))
		{
			vertices[i] = atof(p);
			
			//printf("%f\n", vertices[i]);

			/* �����ł���΂�*p���P�i�߂� */
			while (isNumberString(*p)) p++;

			i++;
		}
		p++;
	}

	i = 0;
	data.vertexNumber = 0;
	/* '('�܂ŕ������ǂݔ�΂� */
	p = strstr(p, "4 V(");
	p += strlen("4 V(");
	/* ')'�܂Ń��[�v���� */
	while (*p != ')')
	{
		if (isNumberString(*p))
		{
			indices[i] = atoi(p);
			data.vertexNumber++;
			printf("%d", indices[i]);

			/* �Y�����镶���łȂ����*p��i�߂� */
			while (!isNumberString(*p)) p++;

			i++;
		}
		p++;
	}
	/* 4���_�C���f�b�N�X�ł���� */
	int i = 0;
	if (data.vertexNumber == 4)
	{
		/* 3���_*2�̌`�ɕ������� */
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