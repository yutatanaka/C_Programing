
/*
	�ڋq�ԍ��A�`�[�敪�A���z����͂��A�ڋq�}�X�^�Ƃ̃`�F�b�N���s���A�n�j�Ȃ��
	�`�[�t�@�C���ɏo�͂���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* �ڋq���R�[�h(�\���̂̐錾) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

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

/* ������ʂ�\������֐� */
void Shoki()
{
	printf("          <<<  ��������f�[�^����  >>>\n\n");
	printf("          �V�K�o�^���P�A�ǉ��o�^���Q    :");
	scanf("%d", &shurui);
}

int main()
{
	/* �t�@�C���|�C���^ */
	FILE *fpm;				/* �ڋq�}�X�^�p�|�C���^ */
	FILE *fpd;				/* �`�[�p�|�C���^ */

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
	while (fscanf(fpm, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka))
	{

	}


	getchar();
	return 0;
}