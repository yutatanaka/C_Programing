
/* 
	��ʂ��Ј��ԍ��A�����A��{������͂��t�@�C���ɏo�͂���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* �֐��̃v���g�^�C�v�錾 */
void Touroku(int);

int main()
{
	int shurui = 0;				/* ��� */
	char kakunin[5] = { 0 };	/* �m�F */

	do
	{

		/* �@������ʂ�\�����o�͕��@(shurui)���󂯎�� */
		printf("                  <<< �Ј��}�X�^�o�^ >>>    \n");
		printf("          �V�K�o�^���P�A�ǉ��o�^���Q�@�@�F");	scanf("%d", &shurui);

		/*
			1:�V�K�o�^�������1���ڂ���o�͂���B(�t�@�C���I�[�v�����[�h��"w")
			2:�ǉ��o�^����O��̑�������o�͂���B(�t�@�C���I�[�v�����[�h��"a")
			*/

		/* �A�o�^�֐������s����B�������o�͕��@�Ƃ��� */
		Touroku(shurui);

		/* �B2���ڈȍ~�̏o�͂̏o�͕��@�͂Q�Ƃ���(shurui = 2;) */
		shurui = 2;

		/* �C�����𑱂��邩�ǂ����̕\�������A�m�F(kakunin)�Ɍ��ʂ��󂯎�� */
		printf("                �����܂����H(yes / no):");	scanf("%s", kakunin);

		/* �D�m�F��'y'�܂���'Y'�̂Ƃ��͇@����B���J��Ԃ� */
	} while ( strcmp(kakunin, "yes") == 0 || strcmp(kakunin, "YES") == 0);

	getchar();
	getchar();
	return 0;
}

/* �o�^�����֐� */
void Touroku(int shurui)
{
	FILE *fp;							/* (1)�t�@�C���|�C���^�̐錾 */
	int bango = 0;						/* �ԍ� */
	int kihonkyu = 0;					/* ��{�� */
	char kakunin[5] = { 0 };			/* �m�F */
	char namae[20] = { 0 };				/* ���� */

	/* ���͉�ʂ�\�����A�Ј��ԍ�(bango)�A����(namae)�A��{��(kihonkyu)����͂��� */
	printf("          1 �Ј��ԍ� (���p����4��)�@�@�F");	scanf("%d", &bango);
	printf("          2 ���@�@�� (�S�p7����)�@�@�@�F");	scanf("%s", namae);
	printf("�@�@�@�@�@3 �� �{ �� (���p����8��)�@  �F");	scanf("%d", &kihonkyu);

	/* �o�^�m�F(kakunin)���󂯎�� */
	printf("                �o�^���܂����H(yes / no):");	scanf("%s", kakunin);

	if (strcmp(kakunin, "yes") == 0 || strcmp(kakunin, "YES"))
	{
		if (shurui == 1)
		{
			/* �o�͕��@(shurui)��1�Ȃ�t�@�C��"shain_m.txt"��"w"���[�h */
			fp = fopen("shain_m.txt", "w");
		}
		else if (shurui == 2)
		{
			/* �o�͕��@(shurui)��2�Ȃ�t�@�C��"shain_m.txt"��"a"���[�h */
			fp = fopen("shain_m.txt", "a");
		}

		fprintf(fp, "%04d    %-15s       %08d\n", bango, namae, kihonkyu);
		fclose(fp);
	}
}