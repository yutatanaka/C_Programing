
/*  
	�c�Ə���"end"�ɂȂ�܂ŁA�c�Ə��Ɣ�����z[�P�ʁF��~]����͂���
	�f�[�^���Ȃ��Ȃ����甄����z�ɂď��ʕt�����s���A�c�Ə��A������z�A���ʂ�\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, uriage = 0;			/* �����A���� */
	int uriage_t[10] = { 0 };			/* ����e�[�u�� */
	int juni_t[10] = { 0 };				/* ���ʃe�[�u�� */
	char eigyousyo[20] = { 0 };			/* �c�Ə� */
	char eigyousyo_t[10][20] = { 0 };	/* �c�Ə��e�[�u�� */

	printf("�c�Ə��F");		scanf("%s", eigyousyo);
	printf("����F");		scanf("%d", &uriage);
	/* �c�Ə���"end"�ɂȂ�܂Ŏ��̏������J��Ԃ�(while�����g�p) */
	while (strcmp(eigyousyo, "end") != 0)
	{
		/* �c�Ə����c�Ə��e�[�u��(eigyousyo_t)�̊Y���ӏ���(������Y����)�i�[���� */
		strcpy(eigyousyo_t[kensu], eigyousyo);
		/* ����𔄏�e�[�u��(uriage_t)�̊Y���ӏ���(������Y����)�i�[���� */
		uriage_t[kensu] = uriage;
		/* ���ʃe�[�u�� */
		juni_t[kensu] = 1;
		/* ������1�����Z���� */
		kensu++;
		/* 2���ڈȍ~�̉c�Ə�����͂��� */
		printf("�c�Ə��F");	scanf("%s", eigyousyo);
		/* �c�Ə���"end"�łȂ���΁A�������͂��� */
		if (strcmp(eigyousyo, "end") != 0)
		{
			printf("����F");	scanf("%d", &uriage);
		}
	}
	for (int i = 0; i <= kensu; i++)
	{
		for (int j = 0; j <= kensu; j++)
		{
			if (uriage_t[i] < uriage_t[j])
				juni_t[i]++;
		}
	}

	/* ���o����\������ */
	printf("___________________________________\n");
	printf("�@�@�@�c�Ə��@�@�@������z�@�@����\n");
	printf("--------------------------------\n");

	/* �c�Ə��A������z�A���ʂ̕\��(�i�[�����������J��Ԃ�)(for�����g�p) */
	for (int i = 0; i <= kensu - 1; i++)
	{
		printf("�@%-10s�@�@%-8d�@�@%d\n", eigyousyo_t[i], uriage_t[i], juni_t[i]);
	}
	printf("=================================\n");

	getchar();
	getchar();
	return 0;
}