
/*
	�ȉ��̏����ƁA���s���ʂ̗�����Ƃɂ��āA�L�[�{�[�h������͂���������𔽓]������v���O���������
	(1)������̒����̍ő�l��16����
	(2)�L�[�{�[�h������͂��ꂽ��������A���̒����{�P�̔z��ϐ���malloc()�Ő��������đ������
	(3)2�Ő���������������ɁA���͂�����������𔽓]�������f�[�^������
	(4)���ʂ��o�͂���
	(5)�����������������Afree()�ŉ������
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
	string = (char *)malloc(16 + 1);

	/* ���͏��� */
	printf("������F");	scanf("%s", string);

	/* ���������߂� */
	len = strlen(string);

	for (i = len-1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	free(string);
	getchar();
	getchar();
	return 0;
}