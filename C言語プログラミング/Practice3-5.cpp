
/*
	�������hend�h�ɂȂ�܂ŁA�����Ɠ_������͂���B
	�f�[�^���Ȃ��Ȃ�����_���ɂď��ʕt�����s���A�����A�_���A���ʂ�\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int kensu = 0, tensu = 0;				/* �����A�_�� */
	char simei[10] = { 0 };					/* ���� */
	int tensu_t[10] = { 0 };				/* �_���e�[�u�� */
	char simei_t[20][10] = { 0 };			/* �����e�[�u�� */
	int juni_t[10] = { 0 };					/* ���ʃe�[�u�� */

	/* ���͏��� */
	printf("�����F");	scanf("%s", simei);
	printf("�_���F");	scanf("%d", &tensu);
	/* ������"end"�ɂȂ�܂Ŏ��̏������J��Ԃ�(while�����g�p) */
	while (strcmp(simei, "end") != 0)
	{
		/* �����������e�[�u��(simei_t)�̊Y���ӏ���(������Y�����ɂ���)�i�[����@*/
		strcpy(simei_t[kensu], simei);
		/* �_����_���e�[�u��(tensu_t)�̊Y���ӏ���(������Y�����ɂ���)�i�[���� */
		tensu_t[kensu] = tensu;
		/* ���ʃe�[�u��(juni_t)�̊Y���ӏ���(������Y�����ɂ���)�P���i�[���� */
		juni_t[kensu] = 1;	
		/* �񌏖ڈȍ~�̎�������͂��� */
		printf("�����F");	scanf("%s", simei);
		/* ������"end"�łȂ���΁A�_������͂��� */
		if (strcmp(simei, "end") != 0)
		{
			printf("�_���F");	scanf("%d", &tensu);
			/* �����ɂP�����Z���� */
			kensu++;
		}

	}
	
	/* ���ʂÂ�(����菬�����Ƃ����ʂ�1��������) */
	for (int i = 0; i <= kensu; i++)
	{
		for (int j = 0; j <= kensu; j++)
		{
			if (tensu_t[i] < tensu_t[j])
			{
				juni_t[i]++;
			}
		}
	}

	/* ���o����\������ */
	printf("_______________________________\n");
	printf("�@�@�����@�@�@�_���@�@����\n");
	printf("-------------------------------\n");
	/* �����A�_���A���ʂ̕\��(�i�[�����������J��Ԃ�)(for�����g�p) */
	for (int k = 0; k <= kensu; k++)
	{
		printf("�@�@%-5s�@�@�@�@%3d�@�@%d\n", simei_t[k], tensu_t[k], juni_t[k]);
	}
	/* �t�b�^�[��\������ */
	printf("===============================\n");

	getchar();
	getchar();
	return 0;
}