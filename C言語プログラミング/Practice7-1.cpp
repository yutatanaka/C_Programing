
/*  
	��ʂ��ڋq�ԍ��A�ڋq���A���|�c������͂��A�t�@�C���ɏo�͂���(Practice6-1���Q�l�ɂ��č쐬)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* �o�^�����֐� */
void Touroku(int &shurui)
{
	/* �ڋq���R�[�h(�\���̂̐錾) */
	typedef struct
	{
		int bango;
		char namae[15];
		int zandaka;
	}KOKYAKU_M;

	char kakunin[5];
	FILE *fp;
	char *fileName = "kokyaku_m.txt";
	KOKYAKU_M krec;

	system("cls");
	printf("\n");
	printf("          1  �ڋq�ԍ��i���p�����S���j�@�F");	scanf("%d*c", &krec.bango);
	printf("          2  �� �q ���i�S�p7�����j�@�@ �F");	scanf("%s", krec.namae);
	printf("          3  ���|�c���i���p�����W���j�@�F");	scanf("%d*c", &krec.zandaka);
	printf("\n");
	printf("          �o�^���܂����H(yes/no)       �F");	scanf("%s", kakunin);

	/* �o�^�m�F��yes�Ȃ�� */
	if (strcmp(kakunin, "yes") == 0)
	{
		/* �o�͕��@(shurui)�Ȃ�� */
		if (shurui == 1)
		{
			fp = fopen(fileName, "w");
		}
		else if (shurui == 2)
		{
			fp = fopen(fileName, "a");
		}

		/* �ڋq���R�[�h���t�@�C���ɏo�͂���Bfwrite���g�p���� */
		//fwrite(&krec, sizeof(KOKYAKU_M), 1, fp);
		fprintf(fp, "%d %s %d\n", krec.bango, krec.namae, krec.zandaka);
		fclose(fp);
	}
	
}

int main()
{
	int shurui = 0;					/* ��� */
	char kakunin[5];				/* �m�F */

	do
	{
		/* ������ʂ�\�����o�͕��@���󂯎�� */
		printf("          <<<  �ڋq�}�X�^�o�^  >>>\n");
		printf("\n            �V�K�o�^���P�A�ǉ��o�^���Q�F");
		scanf("%d", &shurui);

		/* �o�^�֐������s����B�������o�͕��@�Ƃ��� */
		Touroku(shurui);
		/* 2���ڈȍ~�̏o�͕��@��2�Ƃ��� */
		shurui = 2;

		/* �����𑱂��邩�ǂ����̕\�������m�F�Ɍ��ʂ��󂯎�� */
		printf("          �����܂����H(yes/no)         �F");	scanf("%s", kakunin);
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}