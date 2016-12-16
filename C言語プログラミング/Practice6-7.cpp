
/* 
	�Ј��}�X�^�t�@�C����ǂݍ��݁A��U�e�[�u���Ɋi�[���A�e�[�u������ꗗ��\������
	10���\��������m�F���b�Z�[�W��\�����A�������͂���B
	1�����͂��ꂽ��O��10��
	2�����͂��ꂽ�玟��10����\������B
	9�����͂��ꂽ�珈�����I������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "henshu.h"

int main()
{
	/* �ϐ� */
	int bango = 0, kihonkyu = 0;		/* �ԍ��A��{�� */
	int max_no = 0, no = 0, lno = 0;	/* �ő匏���A�J�E���^ */
	int start_no = 0, end_no = 0;		/* �J�n�ԍ��A�I���ԍ� */
	int hantei = 0;						/* ���� */
	char simei[10] = { 0 };				/* ���� */
	char kihonkyux[10] = { 0 };			/* ��{�����ҏW��i�[�p */

	/* �e��e�[�u�� */
	int bango_t[50] = { 0 };			/* �ԍ��e�[�u�� */
	char simei_t[10][50] = { 0 };		/* �����e�[�u�� */
	int kihonkyu_t[50] = { 0 };			/* ��{���e�[�u�� */
	
	/* �t�@�C���֌W */
	FILE *fp;							/* �t�@�C���|�C���^�̐錾 */
	char *fileName = "shain_m2.txt";	/* �t�@�C���� */

	/* ���̓t�@�C���͎Ј��}�X�^�Q"shain_m2.txt"�Ƃ��A���̓��[�h�ŃI�[�v������ */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		/* �G���[���� */
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* EOF�ɂȂ�܂Ńt�@�C����ǂݍ��݁A�ԍ��͔ԍ��e�[�u����
	�����͎����e�[�u���ցA��{���͊�{���e�[�u���ւ��ꂼ��i�[����B�Y��������уJ�E���^��no�Ƃ���
	*/
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)
	{
		bango_t[no] = bango;
		strcpy(simei_t[no], simei);
		kihonkyu_t[no] = kihonkyu;
		no++;
	}
	/* �t�@�C���N���[�Y */
	fclose(fp);

	/* �ő匏��(max)��no���i�[���� */
	max_no = no;

	/* �J�n�ԍ��ɂP�A�I���ԍ���10���i�[���� */
	start_no = 1;
	end_no = 10;

	/* �I���ԍ����ő匏�����傫���Ƃ��A�I���ԍ��ɍő匏�����i�[���� */
	if (end_no > max_no)
	{
		end_no = max_no;
	}

	/* �J�n�ԍ�����I���ԍ��܂ł́B10�����̃J�E���^�Ɩ��ׁi�ԍ��A�����A��{���j���e�e�[�u�����\������B
	�Ȃ��A��{����3�����ƂɃJ���}��}������B*/
	hantei = 2;
	while (hantei != 9<= end_no)
	{
			printf("\n          <<<  �Ј��}�X�^�ꗗ  >>>\n");
			printf("        �ԍ� �����@�@�@�@�@�@�@�@  �@��{��\n");
			for (no = 0, lno = 4; no <= end_no; no++, lno++)
			{
				printf("   %4d", no + 1);
				Henshu(kihonkyu_t[no], kihonkyux);
				printf("%04d %-15s %11s\n", bango_t[no], simei_t[no], kihonkyux);
			}
			/* �������� */
			printf("�O���P�A�ぁ�Q�A�I���=�X�@�������Ă��������F");
			scanf("%d", &hantei);

			/* ���肪1�ŊJ�n�ԍ���10���傫���Ƃ��́A�J�n�ԍ����10������ */
			if (hantei == 1 && start_no > 10)
			{
				start_no = start_no - 10;
			}
			/* ���肪�Q��(�J�n�ԍ��{10)���ő匏����菬�����Ƃ��́A�J�n�ԍ���10�𑫂� */
			if (hantei == 2 && (start_no + 10) < max_no)
			{
				start_no = start_no + 10;
			}
			
			/* �J�n�ԍ��{�X���I���ԍ��Ɋi�[���� */
			end_no = start_no + 9;

			/* �I���ԍ����ő匏�����傫���Ƃ��A�I���ԍ��ɍő匏�����i�[���� */
			if (end_no > max_no)
			{
				end_no = max_no;
			}
	}

	getchar();
	return 0;
}