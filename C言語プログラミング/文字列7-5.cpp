
/*
	���̃v���O�������쐬���Ȃ����B
	�E���������͂���B
	�E���͂��ꂽ�������\������B
	��������̓��͂ɂ�scanf�֐����g�p����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int len;

	/* �������̊m�� */
	string = (char *)malloc(20);
	
	/* ������̓��͏��� */
	printf("������F");	scanf("%s", string);

	printf("%s", string);


	/* �������̉�� */
	free(string);
	getchar();
	return 0;
}