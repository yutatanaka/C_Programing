
/*
	������"end"�ɂȂ�܂ŁA�����Ɠ_������͂���B
	�f�[�^���Ȃ��Ȃ�����_���̕��ς��Z�o����B
	���ςƊe�l�̓_�����r���A���ς��20�_�ȏ㉺����Ă�����"***"
	10�_�ȏ㉺����Ă�����"**"
	1�_�ȏ㉺����Ă�����"*"����l���ɕ\������B
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, tensu = 0, heikin = 0;	/* �����A���v�A�_���A���� */
	char simei[10] = { 0 };								/* ���� */
	int tensu_t[10] = { 0 };							/* �����e�[�u�� */
	char simei_t[20][10] = { 0 };						/* �_���e�[�u�� */
	char bikou[10] = { "     " };						/* ���l */
	char bikou_t[20][10] = { 0 };						/* ���l�e�[�u�� */

	printf("�����F");	scanf("%s", simei);
	printf("�_���F");	scanf("%d", &tensu);

	/* ������"end"�ɂȂ�܂Ŏ��̏������J��Ԃ� */
	while (strcmp(simei, "end") != 0)
	{
		/* �_�������v�ɉ��Z����(�݌v) */
		goukei += tensu;
		/* �����������e�[�u��(simei_t)�̊Y���ӏ���(������Y����)�i�[���� */
		strcpy(simei_t[kensu], simei);
		/* �_����_���e�[�u��(tensu_t)�̊Y���ӏ���(������Y����)�i�[���� */
		tensu_t[kensu] = tensu;
		/* �����ɂP�����Z����(�J�E���g) */
		++kensu;
		/* 2���ڈȍ~�̎�������͂��� */
		printf("�����F");	scanf("%s", simei);
		/* ������"end"�łȂ���΁A�_������͂��� */
		if (strcmp(simei, "end") != 0)
		{
			printf("�_���F");	scanf("%d", &tensu);
		}
	}

	/* ���v�̊i�[�ƌ��o���\�� */
	heikin = goukei / kensu;
	/* �����e�[�u���̍Ō��(������Y����) "���@��"���i�[����*/
	strcpy(simei_t[kensu], "����");
	/* �_���e�[�u���̍Ō��(������Y����)���ς��i�[���� */
	tensu_t[kensu] = heikin;
	/* ���o����\������ */
	printf("______________________________\n");
	printf("�@�@�����@�@�@�_���@�@���l�@�@\n");
	printf("------------------------------\n");
	/* �����A�_���A���l�̕\��(�i�[�����������J��Ԃ�)(for�����g�p) */
	for (int i = 0; i <= kensu; ++i)
	{
		if (heikin - tensu_t[i] >= 20)
		{
			strcpy(bikou_t[i], "* * *");
		}
		else if (heikin - tensu_t[i] >= 10)
		{
			strcpy(bikou_t[i], "* *  ");
		}
		else if (heikin - tensu_t[i] >= 1)
		{
			strcpy(bikou_t[i], "*    ");
		}

		printf("�@�@%3s�@�@�@%4d�@�@%5s�@�@\n", simei_t[i], tensu_t[i], bikou_t[i]);
	}

	printf("==============================\n");

	getchar();
	getchar();
	return 0;
}