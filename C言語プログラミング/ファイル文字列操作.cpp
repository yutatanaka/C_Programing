
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// �t�@�C���\���̂ւ̃|�C���^��錾
	FILE *fp;
	char *fileName = "cube.mqo";
	long fileSize;
	char *buffer;
	int n;

	// �t�@�C�����������݃��[�h�ŊJ��
	fp = fopen(fileName, "r");

	// �t�@�C���I�[�v���Ɏ��s�����ꍇ
	if (fp == NULL)
	{
		// ���s�ƕ\�����I��
		printf("�t�@�C���I�[�v�����s\n");
		return -1;
	}

	fseek(fp, 0, SEEK_END);
	fileSize = ftell(fp);
	buffer = new char[fileSize];
	fseek(fp, 0, SEEK_SET);

	fgetc()

	fclose(fp);

	getchar();
	return 0;
}