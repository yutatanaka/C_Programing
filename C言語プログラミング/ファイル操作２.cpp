
/*
	�t�@�C������Q 
	�Q�̃t�@�C����ǂݍ���Ńf�[�^�Ɋi�[���A�V�����e�L�X�g�t�@�C���ŏo�͂���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *fileName_s = "alphabet_small.txt";
	char *fileName_b = "alphabet_big.txt";
	char *string_s;
	char *string_b;
	char *p;
	char *pp;
	long b_size, s_size;
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
	/* �t�@�C���̃T�C�Y�����߂� */
	fseek(fp_s, 0, SEEK_END);
	s_size = ftell(fp_s);
	fseek(fp_s, 0, SEEK_SET);
	
	fseek(fp_b, 0, SEEK_END);
	b_size = ftell(fp_b);
	fseek(fp_b, 0, SEEK_SET);

	/* 2�̃t�@�C���̃������̊m�� */
	string_s = (char*)malloc(s_size);
	string_b = (char*)malloc(b_size);

	/* �Ǎ� */
	fread(string_s, sizeof(char), s_size, fp_s);
	fread(string_b, sizeof(char), b_size, fp_b);

	/* �t�@�C��2���̃��������m�� */
	p = (char*)malloc(s_size + b_size);

	/* �|�C���^�ϐ�pp�ɂ��̃A�h���X���R�s�[ */
	pp = p;

	/* �f�[�^��}�� */
	memcpy(pp, string_s, s_size);
	pp += 26;
	memcpy(pp, string_b, b_size);
	
	/* �t�@�C���N���[�Y */
	fclose(fp_s);
	fclose(fp_b);

	/* �t�@�C���I�[�v�� */
	fpw = fopen("alphabet_bond.txt", "wb");
	fwrite(p, sizeof(char), s_size + b_size, fpw);
	
	/* �t�@�C���N���[�Y */
	fclose(fpw);

	getchar();
	return 0;
}