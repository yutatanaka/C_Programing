
/*
	�ڋq�ԍ��A�`�[�敪�A���z����͂��A�ڋq�}�X�^�Ƃ̃`�F�b�N���s���A�n�j�Ȃ��
	�`�[�t�@�C���ɏo�͂���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �ڋq���R�[�h(�\���̂̐錾) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec, ktbl[51];	

/* �`�[���R�[�h(�\���̂̐錾) */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;

DENPYO_D drec;

/* �ϐ� */
int no, max;			/* �}�X�^�J�E���^(no)�A�}�X�^����(max) */
int shurui, bango;		/* ��������A�ڋq�ԍ� */
char kakunin[5];

/* �t�@�C���|�C���^ */
FILE *fpm;				/* �ڋq�}�X�^�p�|�C���^ */
FILE *fpd;				/* �`�[�p�|�C���^ */

void Shoki();
void Touroku();

int main()
{

	/* ������ʂ�\�����o�͕��@���󂯎�� */
	Shoki();
	/* �P�F�V�K�o�^�������1���ڂ���o�͂���(�t�@�C���I�[�v�����[�h��"w") */
	if (shurui == 1)
	{
		fpm = fopen("kokyaku_m.txt", "w");
	}
	/* �Q�F�ǉ��o�^����O��̑�������o�͂���(�t�@�C���I�[�v�����[�h��"a") */
	else if (shurui == 2)
	{
		fpm = fopen("kokyaku_m.txt", "a");
	}

	/* �ڋq�}�X�^�t�@�C��"kokyaku_m.txt"����̓��[�h"r"�ŃI�[�v������ */
	if ((fpm = fopen("kokyaku_m.txt", "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* �ڋq�}�X�^�t�@�C����ǂݍ��݁Ano��Y�����Ƃ��āA�e���ڂ��e�[�u���Ɋi�[���� */
	no = 0;
	while (fread(&krec, sizeof(KOKYAKU_M), 1, fpm))
	{
		ktbl[no].bango = krec.bango;
		strcpy(ktbl[no].namae, krec.namae);
		ktbl[no].zandaka = krec.zandaka;
		no++;
	}

	/* �f�[�^���Ȃ��Ȃ�����t�@�C�����N���[�Y���Ano��max�Ƃ��� */
	fclose(fpm);
	max = no;

	do
	{
		/* �o�^�֐������s���� */
		Touroku();

		/* "�����܂���?(y/n)"��\�����A�m�F(kakunin)�Ɍ��ʂ��󂯎�� */
		printf("�����܂����H(yes/no)      :");	scanf("%s", kakunin);

		/* �m�F��"yes"�̂Ƃ��͌J��Ԃ� */
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}


/* ������ʂ�\������֐� */
void Shoki()
{
	printf("          <<<  ��������f�[�^����  >>>\n\n");
	printf("          �V�K�o�^���P�A�ǉ��o�^���Q    :");
	scanf("%d", &shurui);
}

/* �o�^����������֐� */
void Touroku()
{
	system("cls");

	/* �ڋq�ԍ�(bango)����͂��� */
	printf("        1 �ڋq�ԍ��i���p����4���j�@�F"); scanf("%d", &bango);
	printf("        2 �� �q ��                  �F");

	/* �ڋq�ԍ��Ńe�[�u���̃T�[�`���s�� */
	no = 0;
	while (bango != ktbl[no].bango && no < max)
	{
		no++;
	}

	/* �e�[�u���Ɍڋq�ԍ������݂����� */
	if (ktbl[no].bango == bango)
	{
		/* �ڋq����\������ */
		printf("%s\n", ktbl[no].namae);
		/* �`�[�敪(kubun)�Ƌ��z(kingaku)����͂��� */
		printf("        3 �`�[�敪�i����=1, ����=2�j�@�F");	scanf("%d", &drec.kubun);
		printf("        4 ���@�@�z�i���p�����W���j�@�@�F");	scanf("%d", &drec.kingaku);

		/* "�n�j�H(yes/no)"��\�����A�m�F(kakunin)���󂯎�� */
		printf("        �n�j�H�iyes/no�j�@�@�@�@�@�@�@�F");	scanf("%s", kakunin);
		/* �m�F��"yes"�������ꍇ�A�`�[�t�@�C�����o�͂��� */
		/* ���̎��o�͕��@(shurui)���P�̂Ƃ��I�[�v�����[�h��"w"�łQ�̂Ƃ�"a"�ŊJ�� */
		if (strcmp(kakunin, "yes") == 0)
		{
			if (shurui == 1)
			{
				fpd = fopen("denpyo_d.txt", "w");
				shurui = 2;
			}
			else
			{
				fpd = fopen("denpyo_d.txt", "a");
			}
			//fprintf(fpd, "%d %d %d", drec.bango, drec.kubun, drec.kingaku);
			fwrite(&drec, sizeof(DENPYO_D), 1, fpd);		
			fclose(fpd);
		}
	}
	else
	{
		printf("\n�ڋq�}�X�^���o�^�B�m�F�@OK�H(yes)");	scanf("%s", kakunin);
	}
}