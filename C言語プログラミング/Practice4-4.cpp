
/*  
	���z����͂���10000�~�`1�~�̋���\���쐬����B2000�~�D�͍l���Ȃ��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int kinshu_t[10] = { 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};/* ����e�[�u���@*/
	int maisu_t[10] = { 0 };										 /* �����e�[�u�� */
	int kingaku = 0, amari = 0, i = 0;								 /* ���z�A�c�� */



	/* ���͏��� */
	printf("------------------���z�\�v�Z------------------\n");
	printf("���z����͂��Ă��������\�\�\��");	scanf("%d", &kingaku);
	
	/* �c�z�ɋ��z������ */
	amari = kingaku;

	/* ����v�Z */
	for (i = 0; i < 9; i++)
	{
		/* �@����(i)�@���@�c�z�@���@����(i) */
		maisu_t[i] = amari / kinshu_t[i];
		/* ��L�̗]����c�z�Ɋi�[ */
		amari = amari % kinshu_t[i];
	}
	/* ����\��(for�����g�p) */
	for (i = 0; i < 9; i++)
	{
		printf("�@�@�@�@�@%5d �~�F�@�@�@%2d ��\n", kinshu_t[i], maisu_t[i]);
	}

	printf("----------------------------------------------\n");

	getchar();
	getchar();
	return 0;
}