
/*
	�ڋq�}�X�^�t�@�C������͂��A�ڋq�ԍ��ŕ��ёւ����s���A�\�[�g�ς݌ڋq�}�X�^���o�͂���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �f�[�^�̒�`(�e�����ŋ��ʂɎg�p�ł���悤�ɁA�֐��̑O�ɒ�`����) */
/* �ڋq���R�[�h(�\���̂̐錾) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;
KOKYAKU_M ktbl[50];
KOKYAKU_M wrec;

/* �t�@�C���|�C���^ */
FILE *fpm1;					/* ���͗p�t�@�C���|�C���^ */
FILE *fpm2;					/* �o�͗p�t�@�C���|�C���^ */

/* �ϐ� */
int n, j;					/* �Y�����p(n)(j) */
int no, max;				/* �}�X�^�J�E���^(no),�}�X�^����(max) */
int bango;					/* �ڋq�ԍ�(bango) */

/* �}�X�^���͊֐� */
void Master_Input()
{
	/* �ڋq�}�X�^�t�@�C��"kokyaku_m.txt"����̓��[�h"r"�ŃI�[�v������ */
	fpm1 = fopen("kokyaku_m.txt", "r");
	/* �ڋq�}�X�^�t�@�C����ǂݍ��݁Ano��Y�����Ƃ��āA�e���ڂ��e�[�u���Ɋi�[���� */
	no = 0;
	while (fscanf(fpm1, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	{
		ktbl[no].bango = krec.bango;
		strcpy(ktbl[no].namae, krec.namae);
		ktbl[no].zandaka = krec.zandaka;
		no++;
	}
	/* �f�[�^���Ȃ��Ȃ�����t�@�C�����N���[�Y���Ano-1��max�Ƃ��� */
	fclose(fpm1);
	max = no - 1;

	/* �^�C�g���Ɠ��͌�����\������ */
	printf("          <<<  �ڋq�}�X�^�\�[�g�@>>>\n");
	printf("          ���͌����@�F  %d�@��\n", max + 1);
}

/* �\�[�g�֐� */
void Master_Sort()
{
	/* n��max����P�܂�(n > 0�̊�) �A���J��Ԃ� */
	for (n = max; n > 0; n--);
	{
		/* j��0����n-1�܂�(j < n�̊�)�@�B���J��Ԃ� */
		for (j = 0; j < n; j++)
		{
			/* �e�[�u����j�Ԗڂ̌ڋq�ԍ���j+1�Ԗڂ̌ڋq�ԍ����傫���Ƃ� */
			if (ktbl[j].bango > ktbl[j + 1].bango)
			{
				/* j�Ԗڂ�j+1�Ԗڂ̓���ւ����s�� */
				/* j�Ԗڂ����[�N�� */
				wrec.bango = ktbl[j].bango;		
				strcpy(wrec.namae, ktbl[j].namae);
				wrec.zandaka = ktbl[j].zandaka;

				/* j+1�Ԗڂ�j�Ԗڂ� */
				ktbl[j].bango = ktbl[j + 1].bango;
				strcpy(ktbl[j].namae, ktbl[j + 1].namae);
				ktbl[j].zandaka = ktbl[j + 1].zandaka;

				/* ���[�N���j+1�Ԗڂ� */
				ktbl[j + 1].bango = wrec.bango;
				strcpy(ktbl[j + 1].namae, wrec.namae);
				ktbl[j + 1].zandaka = wrec.zandaka;
			}
		}
	}
}

/* �}�X�^�o�͊֐� */
void Master_Output()
{
	/* �ڋq�}�X�^�t�@�C��"kokyaku_s.txt"���o�̓��[�h"w"�ŃI�[�v������ */
	fpm2 = fopen("kokyaku_s.txt", "w");
	/* �\�[�g�ς݂̃e�[�u�����A�i�[�������\�[�g�ς݌ڋq�}�X�^�t�@�C�����o�͂���*/
	for (no = 0; no <= max; no++)
	{
		krec.bango = ktbl[no].bango;
		strcpy(krec.namae, ktbl[no].namae);
		krec.zandaka = ktbl[no].zandaka;
		fwrite(&krec, sizeof(KOKYAKU_M), 1, fpm2);		/* �f�[�^�@�o�� */
	}
	/* �B�o�͂��I�������t�@�C�����N���[�Y���A�o�͌�����\�����A"����I��"�ƕ\������ */
	fclose(fpm2);
	printf("          �o�͌����@�F�@%d�@��\n", max + 1);
	printf("          ����I��\n");
}

/* ���C������ */
int main()
{
	Master_Input();

	Master_Sort();

	Master_Output();

	getchar();
	return 0;
}