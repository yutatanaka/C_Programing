
/* 
	�t�@�C������R�@�o�C�i���t�@�C����ǂݍ���ŕ������\������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *string; 
	char *fileName = "alphabet_bond.txt";
	long size;
	FILE *fp;

	/* �t�@�C�������݂��Ȃ���� */
	if ((fp = fopen(fileName, "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* �t�@�C���̃T�C�Y�����߂� */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	string = (char*)malloc(size + 1);
	memset(string, '\0', size + 1);

	/* �t�@�C����ǂݍ��� */
	fread(string, 1, size, fp);
	/* �t�@�C������� */
	fclose(fp);

	/* �o�� */
	printf("%s", string);
	
	free(string);
	getchar();
	return 0;
}