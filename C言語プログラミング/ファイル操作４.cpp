
/*
	�o�C�i���t�@�C����ǂݍ���ŕ\���A�Q�̃e�L�X�g��ʁX�ɕ\���ł���悤�ɂ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *p, *pp, *string;
	int dataSize = 10;
	long size;
	FILE *fp;

	/* �t�@�C�������݂��Ȃ���΃G���\���� */
	if ((fp = fopen("alphabet_bond.txt", "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* �t�@�C���̃T�C�Y�����߂� */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	
	/* �T�C�Y���{�k�������̃������m�� */
	string = (char*)malloc(size);

	/* �t�@�C����ǂݍ��� */
	fread(string, 1, size, fp);

	/* �S�̂̃f�[�^�T�C�Y���������m�� */
	p = (char*)malloc(dataSize);

	/* �|�C���^�ϐ�pp��p�̃A�h���X���R�s�[ */
	pp = p;
	*(int*)pp = dataSize;
	pp += 4;
	memcpy(pp, string, size);
	/* �t�@�C������� */
	fclose(fp);

	fp = fopen("alphabet_data.txt", "wb");
	fwrite(p, sizeof(char), dataSize, fp);

	fclose(fp);

	free(string);
	free(p);
	getchar();
	return 0;
}