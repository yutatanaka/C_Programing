
/* 
	�N��̏���Ɖ�������͂���ƁA���͈̔͂̎Ј��ԍ��A�Ј����A�N���\������B
	�e�[�u���͎��̒ʂ�ɂ���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int shain_no_t[11] = { 1001, 1002, 1005, 1010, 1012, 1013, 1015, 1020, 1021, 1022, 9999 };					/* �Ј��ԍ��e�[�u�� */
	char shain_mei_t[][10] = { "���", "���", "�R�{", "�c��", "�c��", "���c", "�؉�", "���", "���{", "�g�i" };	/* �Ј����e�[�u�� */
	int nenrei_t[10] = { 53, 42, 39, 28, 30, 25, 24, 31, 20, 18 };												/* �N��e�[�u�� */	
	int jougen = 0, kagen = 0, kensu = 0;																		/* ����A�����A���� */

	/* ���͏��� */
	printf("-------------------�Ј�����-------------------\n");
	printf("�N��̏������͂��Ă�������--->");	scanf("%d", &jougen);
	printf("�N��̉�������͂��Ă�������--->");	scanf("%d", &kagen);
	
	/* �e�[�u������(for�����g�p) */
	for (int i = 0; shain_no_t[i] < 9999; i++)
	{
		/* �N��e�[�u���̓��e������Ɖ����͈̔͂̏ꍇ�́A�e�e�[�u���̎Ј��ԍ��A�Ј����A�N���\�����A�����ɂP�����Z���� */
		if (nenrei_t[i] <= jougen && nenrei_t[i] >= kagen)
		{
			printf("�Ώێҁ@�Ј��ԍ���%d�@�Ј�����%s�@�N�%d\n", shain_no_t[i], shain_mei_t[i], nenrei_t[i]);
			kensu++;
		}
	}
	if (kensu != 0)
	{
		printf("�ȏ�%d���ł��B\n", kensu);
	}
	else
	{
		printf("�Ώێ҂͂��܂���B\n");
	}

	getchar();
	getchar();
	return 0;
}