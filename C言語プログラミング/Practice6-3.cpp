
/*
	�Ј��}�X�^�t�@�C����ǂݍ��݈ꗗ��\������
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 1, bango = 0, kihonkyu = 0;		/* �����A�ԍ��A��{�� */
	char simei[20] = { 0 };						/* ���� */
	FILE *fp;									/* �t�@�C���|�C���^�̐錾 */

	/* ���o���ƃ^�C�g����\������ */
	printf("           <<<�@�Ј��}�X�^�ꗗ�@>>>\n");
	printf("           �ԍ� �����@�@�@�@�@��{��\n");

	/* �t�@�C����������Ȃ������ꍇ */
	if ((fp = fopen("shain_m.txt", "r")) == NULL)
	{
		/* �G���[�\�����ďI�������� */
		printf("File Open Error!!\n");
		exit(EXIT_FAILURE);
	}

	/* �f�[�^���Ȃ��Ȃ�܂ŃJ�E���^�ƃf�[�^���e��\������ */
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)	/* �Ǎ� */
	{
		printf("    %4d  ", kensu);									/* �����\�� */
		printf("%04d %-15s %8d\n", bango, simei, kihonkyu);			/* �f�[�^�\�� */
		kensu++;
	}

	fclose(fp);

	printf("\x1b[31m");
	printf("\n     �m�F�����牽���L�[�������Ă��������B\n");

	getchar();
	getchar();
	return 0;
}