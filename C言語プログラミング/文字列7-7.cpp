
/*
	���̃v���O�������쐬���Ȃ����B
	�E���������͂���B
	�E���͂��ꂽ��������t���ɕ\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int i, len;
	/* �������̊m�� */
	string = (char*)malloc(100);

	/* ���͏��� */
	printf("���������́F");	scanf("%s", string);

	/* ������̒����𒲂ׂ� */
	len = strlen(string);

	/* ��������t����\������ */
	for (i = len; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	/* �������̉�� */
	free(string);
	getchar();
	getchar();
	return 0;
}