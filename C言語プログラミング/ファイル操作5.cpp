
/*
	�o�C�i���t�@�C����ǂݍ���(�w�b�_����ǉ������t�@�C��)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *p, *pp;
	long size;
	char *string;
	int *dataSize;
	FILE *fp;

	/* �t�@�C�������݂��Ȃ���΃G���[���� */
	if ((fp = fopen("alphabet_data.txt", "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}
	
	/* �t�@�C���̃T�C�Y�����߂� */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	/* �t�@�C���̃T�C�Y���������������m�� */
	p = (char*)malloc(size + 1);
	//memset(p, '\0', size + 1);

	/* �t�@�C���̓ǂݍ��� */
	fread(p, 1, size, fp);
	dataSize = (int*)malloc(4);
	string = (char*)malloc(7);
	memset(string, '\0', 7);

	pp = p;
	memcpy(dataSize, pp, 4);
	pp += 4;
	memcpy(string, pp, 6);
	/* �t�@�C���N���[�Y */
	fclose(fp);

	/* �o�� */
	printf("%d %s", *dataSize, string);

	free(p);
	free(string);
	getchar();
	return 0;
}