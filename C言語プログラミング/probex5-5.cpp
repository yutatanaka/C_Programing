
/*
	�L�[�{�[�h����2�̕��������͂��A2���������̂Ȃ�΁A�u�������̂ł��v�ƕ\�����A
	�Ⴄ�̂Ȃ�΁u�Ⴄ���̂ł��v�ƕ\������v���O���������@
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *str1, *str2;
	/* �������m�� */
	str1 = (char *)malloc(sizeof(char *));
	str2 = (char *)malloc(sizeof(char *));

	/* ���͏��� */
	printf("������P�F");	scanf("%s", str1);
	printf("������Q�F");	scanf("%s", str2);

	/* ��̕����񂪓������ǂ������� */
	if (strcmp(str1, str2) == 0)
	{
		printf("�������̂ł��B\n");
	}
	else
	{
		printf("�Ⴄ���̂ł��B\n");
	}

	getchar();
	getchar();
	return 0;
}