
/*  
	��ʂ��ڋq�ԍ��A�ڋq���A���|�c������͂��A�t�@�C���ɏo�͂���(Practice6-1���Q�l�ɂ��č쐬)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* �ڋq���R�[�h(�\���̂̐錾) */
typedef struct 
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

/* �o�^�����֐� */
void Touroku(int shuri)
{
	
}

int main()
{
	int shurui = 0;					/* ��� */
	char kakunin[5] = {0};			/* �m�F */

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
		printf("�����܂����H(yes/no)\n");	scanf("%s", kakunin);
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}