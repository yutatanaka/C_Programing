
/*  
	�Ј��ԍ�����͂���ƎЈ�����\������B�Ј��ԍ��ƎЈ����͎��̒ʂ�ɂ���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int shain_no_t[11] = { 1001, 1002, 1005, 1010, 1012, 1013, 1015, 1020, 1021, 1022, 9999};					/* �Ј��ԍ��e�[�u�� */
	char shain_mei_t[20][11] = { "���", "���", "�R�{", "�c��", "�c��", "���c", "�؉�", "���", "���{", "�g�i" }; /* �Ј����e�[�u�� */
	char shain_mei[10] = { 0 };																					/* �Ј��� */
	int shain_no = 0;																							/* �Ј��ԍ� */

	/* ���͏��� */
	printf("----------�Ј�����----------------\n");
	printf("�Ј��ԍ�����͂��Ă�������-->");	scanf("%d", &shain_no);
	printf("----------------------------------\n");

	/* �Ј��ԍ��ŎЈ��ԍ��e�[�u������������(for�����g�p) */
	for (int i = 0; shain_no_t[i] < 9999; i++)
	{
		/* �Ј��ԍ��ŎЈ��ԍ��e�[�u���ɂ�������A����ɑΉ�����Ј������Ј����e�[�u�����i�[���� */
		if (shain_no == shain_no_t[i])
		{
			strcpy(shain_mei, shain_mei_t[i]);
		}
	}
	/* �Ј����̕\�� */
	if (strcmp(shain_mei, "") == 0)
	{
		printf("�Ј��ԍ��̓o�^������܂���B\n");
	}
	else
	{
		printf("�Ј�����%s�ł��B\n", shain_mei);
	}
	
	getchar();
	getchar();
	return 0;
}