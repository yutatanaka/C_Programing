
/*
	�t�@�C������Q 
	�Q�̃t�@�C����ǂݍ���Ńf�[�^�Ɋi�[���A�V�����e�L�X�g�t�@�C���ŏo�͂���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *fileName_s = "alphabet_small.txt";
	char *fileName_b = "alphabet_big.txt";

	char string_s[30];
	char string_b[30];

	FILE *fp_s;		
	FILE *fp_b;			
	FILE *fpw;

	/* �t�@�C�������݂��Ȃ���΃G���\���� */
	if ((fp_s = fopen(fileName_s, "r")) == NULL)
	{
		printf("file open error!\n");
		return false;
	}
	if ((fp_b = fopen(fileName_b, "r")) == NULL)
	{
		printf("file open error!\n");
		return false;
	}

	fgets(string_s, 30, fp_s);
	fgets(string_b, 30, fp_b);

	fclose(fp_s);
	fclose(fp_b);


	/* �t�@�C���I�[�v�� */
	fpw = fopen("alphabet_bond.txt", "wb");
	fwrite(string_s, sizeof(char), 30, fpw);
	fwrite(string_b, sizeof(char), 30, fpw);
	fclose(fpw);

	getchar();
	return 0;
}