
/*  
	����R�[�h���X�ɂȂ�܂ŁA����R�[�h�ƌo�����͂���B
	���傲�Ƃ̌o��̔䗦�ɉ����Ĉ�ʊǗ���(4000)��������B
	����R�[�h�A���喼�A�o��A�䗦�A�����z��\������B
	�m���z�͐�~�P�ʂƂ���n
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0;						/* �����A���v */
	double ritu = 0;								/* �䗦 */
	int bumonCode = 0, keihi = 0, anbun = 0;		/* ����R�[�h�A�o��A�� */
	int bumonCode_t[10] = { 0 };					/* ����e�[�u�� */
	int keihi_t[10] = { 0 };						/* �o��e�[�u�� */
	char bumonName_t[20][10] = { 0 };				/* ���喼�e�[�u�� */

	printf("����R�[�h�F");	scanf("%d", &bumonCode);
	printf("�o��(��~)�F");	scanf("%d", &keihi);

	/* ����R�[�h��9�ɂȂ�܂Ŏ��̏������J��Ԃ� */
	while (bumonCode != 9)
	{
		/* �o������v�ɉ��Z���� */
		goukei += keihi;
		/* ����R�[�h�𕔖�e�[�u��(bumonCode_t)�̊Y���ӏ���(������Y����)�i�[���� */
		bumonCode_t[kensu] = bumonCode;
		/* �o����o��e�[�u��(keihi_t)�̊Y���ӏ���(������Y����)�i�[���� */
		keihi_t[kensu] = keihi;
		/* ����R�[�h�ɑΉ��������喼�𕔖喼�e�[�u��(bumonName_t)�̊Y���ӏ���(������Y����)�i�[���� */
		switch (bumonCode)
		{
		case 1:
			strcpy(bumonName_t[kensu], "������");
			break;
		case 2:
			strcpy(bumonName_t[kensu], "�l����");
			break;
		case 3:
			strcpy(bumonName_t[kensu], "��敔");
			break;
		case 4:
			strcpy(bumonName_t[kensu], "�c�ƕ�");
			break;
		case 5:
			strcpy(bumonName_t[kensu], "������");
			break;
		}
		/* ������1�����Z����(�J�E���g) */
		++kensu;
		/* 2���ڈȍ~�̕���R�[�h����͂��� */
		printf("����R�[�h�F");	scanf("%d", &bumonCode);
		/* ����R�[�h��9�łȂ���΁A�o�����͂��� */
		if (bumonCode != 9)
		{
			printf("�o��(��~)�F");	scanf("%d", &keihi);
		}
	}

	/* ���v�̊i�[�ƌ��o���\�� */
	/* ����R�[�h�e�[�u���̍Ō��(�����Y����)9���i�[���� */
	bumonCode_t[kensu] = 9;
	/* ���喼�e�[�u���̍Ō��(������Y����)"���@�v"���i�[���� */
	strcpy(bumonName_t[kensu], "���@�v");
	/* �o��e�[�u���̍Ō��(������Y����)�o��̍��v�������� */
	keihi_t[kensu] = goukei;
	/* ���o����\������ */
	printf("______________________________________________________________\n");
	printf("�R�[�h\t�@�@���喼\t\t�o��\t�@�䗦\t\t�����z�@\n");
	printf("--------------------------------------------------------------\n");
	
	/* ���A�����z�̌v�Z�Ɩ��ׂ̕\��(�i�[�����������J��Ԃ�)(for�����g�p) */
	for (int i = 0; i <= kensu; i++)
	{
		/* ��������ʌo��~100.0�����v */
		ritu = keihi_t[i] * 100.0 / goukei;
		/* �����z��4000�~����100 */
		anbun = 4000 * ritu / 100;
		/* �R�[�h�A���喼�A�o��A�䗦�A�����z��\�� */
		printf("    %d\t�@�@%s\t\t%5d\t�@�@%6.1f%%\t  %4d  \n", bumonCode_t[i], bumonName_t[i], keihi_t[i], ritu, anbun);
		/* �t�b�^�[��\������ */	
	}
	printf("==============================================================");

	getchar();
	getchar();
	return 0;
}