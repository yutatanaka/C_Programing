
/* 
	�t�@�C������R�@�o�C�i���t�@�C����ǂݍ���ŕ������\������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[60]; 
	char *fileName = "alphabet_bond.txt";
	FILE *fp;

	/* �t�@�C�������݂��Ȃ���� */
	if ((fp = fopen(fileName, "rb")) == NULL)
	{
		printf("file open error!\n");
		return -1;
	}

	/* �t�@�C����ǂݍ��� */
	fread(string, 1, 60, fp);
	/* �t�@�C������� */
	fclose(fp);

	/* �o�� */
	printf("%s", string);

	getchar();
	return 0;
}