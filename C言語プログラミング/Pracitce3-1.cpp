
/* 
	�S���Җ���"end"�ɂȂ�܂ŁA�S���Җ��Ɣ������͂���B���㍇�v�����߂�B
	�e�S���̔��オ���㍇�v�̉����ɂȂ邩�̔䗦�̌v�Z���s���A�S���Җ��A����A�䗦��\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, uriage = 0;		/* �����A���v�A�䗦�A����*/
	int i = 0;
	double ritu = 0;
	char tanto[10] = { 0 };					/* �S���Җ� */
	char tanto_t[20][10] = { 0 };			/* �S���҃e�[�u�� */
	int uriage_t[10] = { 0 };				/* ����e�[�u�� */

	/* ���͏��� */
	printf("�S���Җ����u end �v�ŏI��\n");
	printf("%d�l�ڂ̒S���Җ��F", ++i);	scanf("%s", tanto);
	printf("%d�l�ڂ̔���F", i);		scanf("%d", &uriage);

	/* �S���Җ���"end"�ɂȂ�܂Ŏ��̏������J��Ԃ� */
	while (strcmp(tanto, "end") != 0)
	{
		/* ��������v�ɉ��Z���� */
		goukei += uriage;
		/* ����𔄏�e�[�u��(uriage_t)�̊Y���ӏ���(������Y����)�i�[���� */
		uriage_t[kensu] = uriage;
		/* �S���Җ���S���Җ��e�[�u��(tantou_t)�̊Y���ӏ���(������Y����)�i�[���� */
		strcpy(tanto_t[kensu], tanto);
		/* �����ɂP�����Z���� */
		++kensu;
		/* ��l�ڈȍ~�̒S���Җ�����͂��� */
		printf("%d�l�ڂ̒S���Җ��F", ++i);	scanf("%s", tanto);
		/* �S���Җ���"end"�łȂ���Δ������͂��� */
		if (strcmp(tanto, "end") != 0)
		{
			printf("%d�l�ڂ̔���F", i);	scanf("%d", &uriage);
		}
	}
	printf("\n");
	
	/* ���v�̊i�[�ƌ��o���̕\�� */

	/* �S���Җ��e�[�u���̍Ō��(������Y����) "���v"���i�[����B */
	strcpy(tanto_t[kensu], "���v");
	uriage_t[kensu] = goukei;
	/* ���o����\������ */
	printf("____________________________________________\n");
	printf("\t�S����\t\t����\t�䗦\t\n");
	printf("--------------------------------------------\n");
	/* ���̌v�Z�Ɩ��ׂ̕\��(�i�[�����������J��Ԃ�) */
	for (int k = 0; k <= kensu; k++)
	{
		ritu = (double)uriage_t[k] * 100.0 / (double)goukei;
		printf("\t%s\t\t%5d\t%f%\t\n", tanto_t[k], uriage_t[k], ritu);
	}
	printf("============================================\n");

	getchar();
	getchar();
	return 0;
}
