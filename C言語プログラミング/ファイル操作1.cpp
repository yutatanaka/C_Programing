
/*
	�t�@�C������@a�`z���e�L�X�g�t�@�C���ɓ��͂��A�o��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *fileName = "alphabet.txt";
	FILE *fp;
	

	/* �t�@�C���I�[�v�� */
	fp = fopen(fileName, "w");
	/* �t�@�C���ɏ������� */
	fwrite(str, 26, 1, fp);
	fprintf(fp, "\n%s", str);
	
	/* �t�@�C���N���[�Y */
	fclose(fp);
	getchar();
	return 0;
}