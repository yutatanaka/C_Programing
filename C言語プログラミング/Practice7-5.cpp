
/*
	�`�[�t�@�C������͂��A�ڋq�ԍ��ŕ��ёւ����s���A�\�[�g�ςݓ`�[�t�@�C�����o�͂���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* �f�[�^�̒�`(�e�����ŋ��ʂɎg�p�ł���悤�ɁA�֐��̂܂��ɒ�`����) */
/* �`�[���R�[�h�i�\���̂̐錾�j */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;
DENPYO_D drec;		/* �`�[�@�@�@���R�[�h */
DENPYO_D dtbl[51];	/*           �e�[�u�� */
DENPYO_D wrec;		/*           ���[�N */

/* �t�@�C���|�C���^ */
FILE *fpd1;			/* ���͗p�t�@�C���|�C���^ */
FILE *fpd2;			/* �o�͗p�t�@�C���|�C���^ */

/* �ϐ� */
int i, k;			/* �Y�����p(i)(k) */
int no, max;		/* �J�E���^(no)�A����(max) */
int bango;			/* �ڋq�ԍ�(bango) */

/* �`�[���͊֐� */
void Denpyo_Input()
{
	/* �@�`�[�t�@�C��"denpyo_d.txt"����̓��[�h"r"�ŃI�[�v������ */
	fpd1 = fopen("denpyo_d.txt", "r");
	/* �`�[�t�@�C����ǂݍ��݁Ano��Y�����Ƃ��āA�e���ڂ��e�[�u���Ɋi�[���� */
	no = 0;
	while (fscanf(fpd1, "%d %d %d", &drec.bango, &drec.kubun, &drec.kingaku) != EOF)
	{
		dtbl[no].bango = drec.bango;
		dtbl[no].kubun = drec.kubun;
		dtbl[no].kingaku = drec.kingaku;
		no++;
	}
	/* �f�[�^���Ȃ��Ȃ�����t�@�C�����N���[�Y���Ano-1��max�Ƃ��� */
	fclose(fpd1);
	max = no - 1;

	/* �^�C�g���Ɠ��͌�����\������ */
	printf("          <<<  �`�[�\�[�g  >>>\n");
	printf("          ���͌����@�F�@%d  ��\n");
}

/* �\�[�g�֐� */
void Denpyo_Sort()
{
	/* i��max����P�܂�(i > 0�̊�)�@�A���J��Ԃ� */
	for (i = max; i > 0; i--)
	{
		/* k��0����i-1�܂�(k < i�̊�)�@�B���J��Ԃ� */
		for (k = 0; k < i; k++)
		{
			if (dtbl[k].bango > dtbl[k + 1].bango)
			{
				/* k�Ԗڂ����[�N�� */
				wrec.bango = dtbl[k].bango;
				wrec.kubun = dtbl[k].kubun;
				wrec.kingaku = dtbl[k].kingaku;
				/* k+1�Ԗڂ�k�Ԗڂ� */
				dtbl[k].bango = dtbl[k + 1].bango;
				dtbl[k].kubun = dtbl[k + 1].kubun;
				dtbl[k].kingaku = dtbl[k + 1].kingaku;
				/* ���[�N��k+1�Ԗڂ� */
				dtbl[k + 1].bango = wrec.bango;
				dtbl[k + 1].kubun = wrec.kubun;
				dtbl[k + 1].kingaku = wrec.kingaku;
			}
		}
	}
}

/* �`�[�o�͊֐� */
void Denpyo_Output()
{
	/* �`�[�t�@�C��"denpyo_ds.txt"���o�̓��[�h"w"�ŃI�[�v������ */
	fpd2 = fopen("denpyo_ds.txt", "w");
	/* �\�[�g�ς݂̃e�[�u�����A�i�[�������\�[�g�ςݓ`�[�t�@�C�����o�͂��� */
	for (k = 0; k <= max; k++)
	{
		
		drec.bango = dtbl[k].bango;
		drec.kubun = dtbl[k].kubun;
		drec.kingaku = dtbl[k].kingaku;
		fprintf(fpd2, "%d %d %d\n", drec.bango, drec.kubun, drec.kingaku);
	}
	/* �o�͂��I�������t�@�C�����N���[�Y���A�o�͌�����\�����A����I���Ƃ��� */
	fclose(fpd2);
	printf("          �o�͌����@�F�@%d  ��\n", max + 1);
	printf("          ����I��\n");
}

/* ���C������ */
int main()
{
	Denpyo_Input();
	Denpyo_Sort();
	Denpyo_Output();
	getchar();
	return 0;
}