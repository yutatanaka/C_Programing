
/*  
	�Ј��}�X�^�t�@�C����ǂݍ��݁A��U�e�[�u���Ɋi�[���A�e�[�u������ꗗ��\������
	�P�O���\��������m�F���b�Z�[�W��\�����A�����L�[�������ꂽ�玟��10����\������
	�Ō�̃f�[�^��\��������m�F���b�Z�[�W��\�����A�����L�[�������ꂽ�珈�����I������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �֐��̃v���g�^�C�v�錾 */
void Henshu(int, char*);

int main()
{
	int bango = 0, kihonkyu = 0, no = 0, max = 0, kensu = 0;	/* �ԍ��A��{���A�J�E���^�p�A�ő匏�� */
	char kihonkyux[15] = { 0 };									/* �ҏW��̊�{�� */
	char simei[15] = { 0 };										/* �����p�z�� */
	int bango_t[50] = { 0 };									/* �ԍ��e�[�u�� */
	int kihonkyu_t[50] = { 0 };									/* ��{���e�[�u�� */
	char simei_t[50][20] = { 0 };								/* �����e�[�u�� */
	FILE *fp;													/* �t�@�C���|�C���^�̐錾 */
	char *fileName = "shain_m2.txt";							/* �t�@�C���� */

	/* �t�@�C���I�[�v�������ۂɂm�t�k�k��Ԃ�����G���[���� */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* EOF�ɂȂ�܂Ńt�@�C����ǂݍ��݁A�ԍ�(bango)�͔ԍ��e�[�u��(bango_t)��
	   ����(simei)�͎����e�[�u��(simei_t)��
	   ��{��(kihonkyu)�͊�{���e�[�u��(kihonkyu_t)�ւ��ꂼ��i�[����
	   �Y��������уJ�E���^��no�Ƃ���@*/
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)
	{
		
		bango_t[no] = bango;
		strcpy(simei_t[no], simei);
		kihonkyu_t[no] = kihonkyu;
		no++;
	}
	/* �t�@�C���N���[�Y */
	fclose(fp);
	
	/* �ő匏��(max)��no�̓��e���i�[���� */
	max = no;

	/* 10�����Ƃ̃J�E���^�̖���(�ԍ��A�����A��{��)���e�e�[�u�����\������
	�Ȃ��A��{����3�����ƂɃJ���}��}������@*/
	
	no = 0;
	kensu = 1;
	while (no <= max)
	{
		if (kensu == 1)
		{
			printf("          <<<  �Ј��}�X�^�ꗗ  >>>\n\n");
			printf("          �ԍ� �����@�@�@�@�@�@��{��\n");
		}
		/* �ҏW�֐����Ăяo���Ċ�{����3�����ƂɃJ���}������ */
		Henshu(kihonkyu_t[no], kihonkyux);
		printf("%04d %-15s %11s", bango_t[no], simei_t[no], kihonkyux);

		if (kensu >= 10 || no == max)
		{
			printf("\n       �m�F�����牽���L�[�������Ă��������B\n");
			getchar();
			kensu = 0;
		}
		no++;
		kensu++;
	}
	getchar();
	return 0;
}