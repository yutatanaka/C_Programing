
/*
	���������͂��A
	�����񒆂̃A���t�@�x�b�g��������啶���ɕϊ����ĕ\������v���O�������쐬���Ȃ���
	��printf�֐���1�񂾂��g�p����(1�������\�����Ă͂����Ȃ�)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int i;
	/* �������̊m�� */
	string = (char*)malloc(20 * sizeof(char*));

	

	/* �������̉�� */
	free(string);
	getchar();
	return 0;
}