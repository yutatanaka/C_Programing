
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 101277

int main()
{
	// �t�@�C���\���̂ւ̃|�C���^��錾
	FILE *fp;
	char *fileName = "cube.mqo";
	int tmp = 0;
	int i = 0;
	long fileSize;
	char str[BUFFER_SIZE];
	char *str2;
	float value;

	// �o�b�t�@�T�C�Y��������
	memset(str, '\0', BUFFER_SIZE);

	// �t�@�C����ǂݍ��݃��[�h�ŊJ��
	fp = fopen(fileName, "r");

	// �t�@�C���I�[�v���Ɏ��s�����ꍇ
	if (fp == NULL)
	{
		printf("%s���J���܂���ł����B\n", fileName);
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
		// 1�������ǂݍ���
		tmp = fgetc(fp);

		// �t�@�C���̏I�[�������烋�[�v�I��
		if (tmp == EOF)
		{
			break;
		}

		// ���s������������Ȃɂ����Ȃ�
		if (tmp == '\n')
		{
			continue;
		}

		// ������o�b�t�@�֒l���i�[
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


	/* �t�@�C���N���[�Y */
	fclose(fp);

	getchar();
	return 0;
}