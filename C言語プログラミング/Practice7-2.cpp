
/*  
	�ڋq�}�X�^�t�@�C���̓ǂ݂��݈ꗗ��\������(R063���Q�l�ɂ��č쐬����)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "henshu.h"

/* �ڋq���R�[�h(�\���̂̐錾) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

/* ���o���ƃ^�C�g����\������֐� */
void Midasi()
{
	printf("          <<<  �ڋq�}�X�^�ꗗ�@>>>\n\n");
	printf("          �ԍ� �ڋq���@�@�@�@�@  ���|�c��\n");
}

int main()
{
	int no = 0;
	char zandakax[11];
	FILE *fp;
	char *fileName = "kokyaku_m.txt";
	
	/* ���o���ƃ^�C�g����\������ */
	Midasi();
	
	/* �t�@�C��"kokyaku_m.txt"����̓��[�h"r"�ŃI�[�v������ */
	/* �t�@�C����NULL�ł���΃G���[���� */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* �f�[�^���Ȃ��Ȃ�܂ŃJ�E���^�ƃf�[�^���e��\������ */
	no = 1;
	while (fscanf(fp, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	{
		/* ���[�Ɍ����i�J�E���^�j��\������ */
		printf("   %4d   ", no);
		/* �J���}�}�� */
		Henshu(krec.zandaka, zandakax);
		printf("%04d %-15s %11s\n", krec.bango, krec.namae, zandakax);
		no++;
	}
	printf("      �m�F�����牽���L�[�������Ă��������B\n");
	
	getchar();
	getchar();
	return 0;
}