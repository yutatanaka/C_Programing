
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

	// �t�@�C�����������݃��[�h�ŊJ��
	fp = fopen(fileName, "r");

	// �t�@�C���I�[�v���Ɏ��s�����ꍇ
	if (fp == NULL)
	{
		// ���s�ƕ\�����I��
		printf("%s���J���܂���ł����B\n", fileName);
		return -1;
	}

	/*fseek(fp, 0, SEEK_END);
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

		// ���s�����������牽�����Ȃ�
		if (tmp == '\n')
		{
			continue;
		}
		
		// �������ޯ̧�֒l���i�[
		str[i++] = (char)(tmp);
	}

	// ������\��
	printf("%s\n", str);

	fclose(fp);

	
	getchar();
	//delete buffer;
	return 0;
}