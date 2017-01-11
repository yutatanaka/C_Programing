
/*
	�\�[�g�ς݌ڋq�}�X�^�t�@�C���ƃ\�[�g�ςݓ`�[�t�@�C������͂��A�ڋq�}�X�^�c���ꗗ��\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "henshu.h"

/* �ڋq�}�X�^ */
typedef struct
{
	int bango;
	char namae[10];
	int zandaka;
}KOKYAKU_M;
KOKYAKU_M krec;										/* �ڋq�}�X�^�@���R�[�h */
KOKYAKU_M ktbl[51];									/* �@�@�@�@�@�@�e�[�u�� */

/* �`�[���R�[�h */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;
DENPYO_D drec;										/* �`�[�@�@�@�@���R�[�h */
DENPYO_D dtbl[51];									/* �@�@�@�@�@�@�e�[�u�� */

/* �t�@�C���|�C���^ */
FILE *fpm;											/* �ڋq�}�X�^�p�|�C���^ */
FILE *fpd;											/* �`�[�p�|�C���^ */

/* �ϐ� */
int m_no, m_max;									/* �}�X�^�J�E���^(m_no), �}�X�^����(m_max) */
int d_no, d_max;									/* �`�[�J�E���^(d_no), �`�[����(d_max) */
int lno, n_zandaka;									/* �\���s(lno), �ŐV�c��(n_zandaka) */
char uriagex[15], nyukinx[15], zandakax[15];		/* ����\��(uriagex)�A�\������(nyukinx), �\���c��(zandakax) */

void Master_Input();
void Denpyo_Input();
void Zandaka_Hyouji();
void Title_Hyouji();
void Footer_Hyouji();

int main()
{
	Master_Input();
	Denpyo_Input();
	Zandaka_Hyouji();

	getchar();
	getchar();
	return 0;
}

/* �}�X�^���͊֐� */
void Master_Input()
{
	/* �ڋq�}�X�^�t�@�C��"kokyaku_s.txt"����̓��[�h"r"�ŃI�[�v������ */
	if ((fpm = fopen("kokyaku_s.txt", "r")) == NULL)
	{
		printf("File Open Error!\n");
		exit(EXIT_FAILURE);
	}
	/* �ڋq�}�X�^�t�@�C����ǂݍ��݁Am_no��Y�����Ƃ��āA�e���ڂ��e�[�u���Ɋi�[���� */
	m_no = 0;
	//while (fscanf(fpm, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	while(fread(&krec, 1, sizeof(KOKYAKU_M), fpm))
	{
		ktbl[m_no].bango = krec.bango;
		strcpy(ktbl[m_no].namae, krec.namae);
		ktbl[m_no].zandaka = krec.zandaka;
		m_no++;
	}
	/* �f�[�^���Ȃ��Ȃ�����t�@�C�����N���[�Y���Am_no - 1��m_max�Ƃ���  */
	fclose(fpm);
	m_max = m_no - 1;
}

/* �`�[���͊֐� */
void Denpyo_Input()
{
	/* �`�[�t�@�C��"denpyo_ds.txt"����̓��[�h"r"�ŃI�[�v������ */
	if ((fpd = fopen("denpyo_ds.txt", "r")) == NULL)
	{
		printf("File Open Error!\n");
		exit(EXIT_FAILURE);
	}
	/* �`�[�t�@�C����ǂݍ��݁Ad_no��Y�����Ƃ��āA�e���ڂ��e�[�u���Ɋi�[���� */
	d_no = 0;
	//while (fscanf(fpd, "%d %d %d", &drec.bango, &drec.kubun, &drec.kingaku) != EOF)
	while(fread(&drec, sizeof(DENPYO_D), 1, fpd))
	{
		dtbl[d_no].bango = drec.bango;
		dtbl[d_no].kubun = drec.kubun;
		dtbl[d_no].kingaku = drec.kingaku;
		d_no++;
	}
	/* �f�[�^���Ȃ��Ȃ�����t�@�C�����N���[�Y���Ad_no - 1��d_max�Ƃ��� */
	fclose(fpd);
	d_max = d_no - 1;
}

/* �c���\���֐� */
void Zandaka_Hyouji()
{
	/* �^�C�g���\���֐�(Title_Hyouji())�����s���� */
	Title_Hyouji();
	/* �`�[�J�E���^(d_no)��0�ɂ��� */
	d_no = 0;

	/* �}�X�^�J�E���^(m_no)��0����m_no <= m_max�̊�5�`�P�O�܂ł��J��Ԃ� */
	for (m_no = 0; m_no <= m_max; m_no++)
	{
		/* ��؂�s"------------"��\������ */
		printf("---------------------------------------------------------------\n");
		printf("%4d", m_no + 1);
		/* �ڋq�ԍ��A�ڋq���A�c����\������B���̂Ƃ��c���͂R�����ƂɃJ���}��}������ */
		Henshu(ktbl[m_no].zandaka, zandakax);
		printf("      %04d %-15s %32s\n", ktbl[m_no].bango, ktbl[m_no].namae, zandakax);
		/* �c��(zandaka)���ŐV�c��(n_zandaka)�Ƃ��� */
		n_zandaka = ktbl[m_no].zandaka;
		/* �ڋq�}�X�^m_no�Ԗڂ̌ڋq�ԍ����`�[�e�[�u��d_no�Ԗڂ̌ڋq�ԍ��Ɠ������Ad_no <= d_max�̊Ԃ͂W�`�X�܂ł��J��Ԃ� */
		while (ktbl[m_no].bango == dtbl[d_no].bango && d_no <= d_max)
		{
			if (dtbl[d_no].kubun == 1)
			{
				/* ���z�𔄏㗓�ɍŐV�c�����c�����ɃJ���}��}�����ĕ\������ */
				Henshu(dtbl[d_no].kingaku, uriagex);
				/* �ŐV�c���ɋ��z�������� */
				n_zandaka = n_zandaka + dtbl[d_no].kingaku;
				Henshu(n_zandaka, zandakax);
				printf("%42s            %11s\n", uriagex, zandakax);
			}
			else
			{
				/* ���z��������ɍŐV�c�����c�����ɃJ���}��}�����ĕ\������ */
				Henshu(dtbl[d_no].kingaku, nyukinx);
				/* �ŐV�c�������z������ */
				n_zandaka = n_zandaka - dtbl[d_no].kingaku;
				Henshu(n_zandaka, zandakax);
				printf("%53s%11s\n", nyukinx, zandakax);
			}
			/* �`�[�J�E���^(d_no)�ɂP�������� */
			d_no++;
			/* �}�X�^�J�E���^���}�X�^�����Ɠ������Ƃ�(�Ō�̃f�[�^�̂Ƃ�)�t�b�^�s(Footer_Hyouji())��\������ */
			if (m_no == m_max)
			{
				Footer_Hyouji();
			}
		}
	}
}

/* �^�C�g���\���֐� */
void Title_Hyouji()
{
	printf("                    <<<  �ڋq�}�X�^�c���ꗗ  >>>\n");
	printf("          �ԍ� �ڋq���@�@�@�@�@�@�@�@�@����@�@�@�����@�@  ���|�c��\n");
}

/* �t�b�^�\���֐� */
void Footer_Hyouji()
{
	printf("--------------------------------------------------------------------\n\n");
	printf("          �}�X�^���͌��� �� %d ���A �`�[���� �� %d ��\n", m_max + 1, d_max + 1);
	printf("          �I���ł��B�m�F�����牽���L�[�������Ă��������B\n");
	getchar();
}